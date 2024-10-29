import React from "react";
import { MultiplicationSignIcon } from "hugeicons-react";

export const Modal = ({ showModal, modalType, closeModal }) => {
  if (!showModal) return null;
  return (
    <>
      {modalType === "login" && (
        <div
          className="fixed inset-0 flex items-center justify-center"
          onClick={closeModal} // Close modal on overlay click
        >
          <div
            className={`modal-overlay bg-white w-[40%] absolute transition-all ease-in duration-300 ${
              showModal ? "scale-100" : "scale-0"
            }`}
            onClick={(e) => e.stopPropagation()}
          >
            <div className="modal-content flex flex-col justify-center items-center gap-5 px-5 py-5">
              <div
                className="close self-end cursor-pointer"
                onClick={closeModal}
              >
                <MultiplicationSignIcon color="#000" size={24} />
              </div>
              <span className="self-start text-[1.8rem] font-semibold">
                Login
              </span>
              <form action="" className="flex flex-col gap-5 w-full">
                <input
                  type="email"
                  placeholder="Enter Email Address"
                  className="w-full border-2 border-black rounded-md px-4 py-2.5"
                />
                <input
                  type="password"
                  placeholder="Enter Password"
                  className="w-full border-2 border-black rounded-md px-4 py-2.5"
                />
                <button className="bg-cyan-800 hover:bg-cyan-950 text-white py-2 text-[1.2rem] rounded-md">
                  Login
                </button>
                <span className="text-center text-slate-500 cursor-pointer">
                  Create New Account
                </span>
              </form>
            </div>
          </div>
        </div>
      )}
      {modalType === "register" && (
        <div
          className="fixed inset-0 flex items-center justify-center"
          onClick={closeModal} // Close modal on overlay click
        >
          <div
            className={`modal-overlay bg-white w-[40%] absolute transition-all duration-300  ${
              showModal ? "translate-y-0" : "-translate-y-full"
            }`}
          >
            <div className="modal-content flex flex-col justify-center items-center gap-5 px-5 py-5">
              <div
                className="close self-end cursor-pointer"
                onClick={closeModal}
              >
                <MultiplicationSignIcon color="#000" size={24} />
              </div>
              <span className="self-start text-[1.8rem] font-semibold">
                Create New Account
              </span>
              <form action="" className="flex flex-col gap-5 w-full">
                <input
                  type="text"
                  placeholder="Enter Full Name"
                  className="w-full border-2 border-black rounded-md px-4 py-2.5"
                />
                <input
                  type="email"
                  placeholder="Enter Email Address"
                  className="w-full border-2 border-black rounded-md px-4 py-2.5"
                />
                <input
                  type="password"
                  placeholder="Enter Password"
                  className="w-full border-2 border-black rounded-md px-4 py-2.5"
                />
                <button className="bg-cyan-800 hover:bg-cyan-950 text-white py-2 text-[1.2rem] rounded-md">
                  Create Account
                </button>
                <span className="text-center text-slate-500 cursor-pointer">
                  Back to Login
                </span>
              </form>
            </div>
          </div>
        </div>
      )}
    </>
  );
};
