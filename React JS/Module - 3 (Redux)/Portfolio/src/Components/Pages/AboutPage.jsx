import React from "react";
import { Download04Icon } from "hugeicons-react";
import { useSelector } from "react-redux";

export const AboutPage = () => {
  const theme = useSelector((state) => state.theme.mode);
  return (
    <data-scroll-section>
      <div className="about py-5 md:py-12 lg:py-14 px-5 sm:px-10 md:px-15 lg:px-20 flex flex-col md:flex-row justify-between items-start gap-8">
        <div className="img sm:w-full md:w-1/2 lg:pe-10 ">
          <img
            src="src/assets/img/PXL_20240120_040144849.RAW-01.COVER.jpg"
            alt=""
            className="rounded-lg"
          />
        </div>
        <div className="text-content sm:w-full md:w-1/2">
          <h1
            className={`mb-2 ${
              theme === "dark" ? "text-slate-400" : "text-neutral-600"
            } text-[1.1rem] md:text-[1.2rem] font-bold tracking-wider`}
          >
            I'm Sahil Dhandhukiya
          </h1>
          <span className="dark:text-white text-[1.6rem] lg:text-[2.5rem] tracking-wider sm:leading-5 md:leading-8 lg:leading-[50px]">
            I'm a Front-end Developer
          </span>
          <p
            className={` ${
              theme === "dark" ? "text-slate-400" : "text-neutral-600"
            } text-[1.2rem] mt-2`}
          >
            As a front-end developer, my role is to design and implement the
            user-facing aspects of websites and web applications. I focus on
            creating intuitive, responsive, and visually appealing interfaces
            that ensure a seamless user experience. My expertise lies in
            technologies like HTML, CSS, and JavaScript, along with frameworks
            and libraries such as React.js. I specialize in crafting layouts,
            stylingt components, handling client-side logic, and optimizing
            performance to make sure the website looks great and works
            efficiently across all devices.
          </p>
          <a
            href="src/assets/Sahil Dhandhukiya.pdf"
            download={"Sahil Dhandhukiya.pdf"}
            className="bg-[#302f2f] text-[#c8c8c8] dark:text-black dark:bg-gray-300 w-full md:w-[60%] lg:w-[50%] xl:w-[35%] flex justify-center items-center mt-6 py-3 text-[1.05rem] rounded-lg"
          >
            <Download04Icon
              className="mr-2 text-[##171717] dark:text-[#6b7280]"
              // color="#6b7280"
            />
            Download Resume
          </a>
        </div>
      </div>
    </data-scroll-section>
  );
};
