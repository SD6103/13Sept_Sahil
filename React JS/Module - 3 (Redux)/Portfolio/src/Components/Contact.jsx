import React from "react";

export const Contact = () => {
  return (
    <div className="contact py-10 md:py-12 lg:py-14 px-5 sm:px-10 md:px-15 lg:px-20 flex flex-col justify-center items-center gap-10">
      <div className="context">
        <h1 className="dark:text-white text-center font-[nusar] text-[2rem] md:text-[2.1rem] lg:text-[2.2rem] tracking-wide ">
          Contact
        </h1>
        <p className="dark:text-gray-300 text-center">
          Feel free to Contact me by submitting the form below and I will get
          back to you as soon as possible
        </p>
      </div>
      <form className="w-full md:w-[50%] lg:w-[65%] flex flex-col gap-8 bg-neutral-300 dark:bg-gray-300 px-4 md:px-10 py-8 md:py-14 rounded-lg">
        <div className="input-control">
          <input
            type="text"
            placeholder="Full Name"
            className="w-full text-[1.10rem] px-5 py-5 rounded-lg bg-gray-100 dark:bg-gray-200 text-black placeholder-gray-500 focus:outline-none"
          />
        </div>
        <div className="input-control">
          <input
            type="email"
            placeholder="Email Address"
            className="w-full text-[1.10rem] px-5 py-5 rounded-lg bg-gray-100 dark:bg-gray-200 text-black placeholder-gray-500 focus:outline-none"
          />
        </div>
        <div className="input-control">
          <textarea
            rows={5}
            placeholder="Your Feedback"
            className="w-full text-[1.10rem] px-5 py-5 rounded-lg bg-gray-100 dark:bg-gray-200 text-black placeholder-gray-500 focus:outline-none"
          ></textarea>
        </div>
        <div className="input-control text-center md:text-start">
          <button className="dark:bg-gray-900 bg-neutral-800  text-white rounded-lg w-full md:w-[40%] lg:w-[28%] py-3 text-[1.1rem] font-[900] tracking-wider">
            Send
          </button>
        </div>
      </form>
    </div>
  );
};
