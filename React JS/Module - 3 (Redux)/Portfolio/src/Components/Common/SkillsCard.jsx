import React from "react";

export const SkillsCard = ({ src, per }) => {
  return (
    <>
      <div className="html flex justify-center items-center gap-5">
        <img src={src} alt="" className="w-[15%] md:w-[12%]" />
        <div className="w-full bg-slate-300 rounded-full h-4.5 dark:bg-gray-800">
          <div
            className="dark:bg-gray-300 bg-neutral-700 rounded-full h-4.5 text-[0.9rem] font-bold text-center p-0.5 leading-none text-white dark:text-black"
            style={{ width: `${per}` }}
          >
            {per}
          </div>
        </div>
      </div>
    </>
  );
};
