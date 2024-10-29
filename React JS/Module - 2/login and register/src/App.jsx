import React, { useState } from "react";
import { Modal } from "./Components/Modal";

export const App = () => {
  const [showModal, setShowModal] = useState(false);
  const [modalType, setModalType] = useState("login");

  const openModal = (type) => {
    setModalType(type);
    setShowModal(true);
  };

  const closeModal = () => {
    setShowModal(false);
  };

  return (
    <div className="bg-black h-screen flex flex-col justify-center items-center gap-10">
      <div className="login flex flex-col justify-center items-center gap-2">
        <span className="text-white text-[1.3rem]">Login Here</span>
        <button
          onClick={() => openModal("login")}
          className="bg-emerald-600 text-white px-10 py-1.5 rounded-md hover:bg-emerald-800 transition-all duration-300"
        >
          Login
        </button>
      </div>
      <div className="register flex flex-col justify-center items-center gap-2">
        <span className="text-white text-[1.3rem]">Register Here</span>
        <button
          onClick={() => openModal("register")}
          className="bg-emerald-600 text-white px-10 py-1.5 rounded-md hover:bg-emerald-800 transition-all duration-300"
        >
          Register
        </button>
      </div>
      <Modal
        showModal={showModal}
        modalType={modalType}
        closeModal={closeModal}
      />
    </div>
  );
};
