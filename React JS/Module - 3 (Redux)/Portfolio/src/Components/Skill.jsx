import React from "react";
import { SkillsCard } from "./Common/SkillsCard";
import { HTML, CSS, JS, Bootstrap, Tailwind, ReactImg } from "../assets/index";
export const Skill = () => {
  return (
    <div className="skill py-10 md:py-12 lg:py-14 px-5 sm:px-10 md:px-15 lg:px-20 flex flex-col justify-center items-center gap-8">
      <div className="text-content mx-auto">
        <h1 className="dark:text-white text-center font-[nusar] text-[2rem] md:text-[2.1rem] lg:text-[2.2rem] tracking-wide">
          Skills
        </h1>
      </div>
      <div className="skills flex flex-col md:flex-row gap-5 md:gap-32">
        <div className="left flex flex-col gap-5 md:gap-8">
          <SkillsCard src={HTML} per="95%" />
          <SkillsCard src={CSS} per="95%" />
          <SkillsCard src={JS} per="80%" />
        </div>
        <div className="right flex flex-col gap-5 md:gap-8">
          <SkillsCard src={Bootstrap} per="95%" />
          <SkillsCard src={Tailwind} per="90%" />
          <SkillsCard src={ReactImg} per="60%" />
        </div>
      </div>
    </div>
  );
};

{
  /* <div className="html flex justify-center items-center gap-5">
            <img
              src="src/assets/img/HTML5.png"
              alt=""
              className="w-[15%] md:w-[12%]"
            />
            <div className="w-full bg-slate-300 rounded-full h-4.5 dark:bg-gray-800">
              <div className="dark:bg-gray-300 bg-neutral-700 rounded-full w-[95%] h-4.5 text-[0.9rem] font-bold text-center p-0.5 leading-none text-white dark:text-black">
                95%
              </div>
            </div>
          </div> */
}
