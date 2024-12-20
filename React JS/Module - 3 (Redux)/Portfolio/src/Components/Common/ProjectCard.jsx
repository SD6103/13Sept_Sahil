import React from "react";
import { SquareArrowUpRightIcon } from "hugeicons-react";

export const ProjectCard = ({
  src,
  title,
  desc,
  tech1,
  tech2,
  tech3,
  tech4,
  link,
}) => {
  return (
    <>
      <div className="project w-[100%] md:w-[70%] lg:w-[40%] xl:w-[30%] h-fit relative rounded-[20px]">
        <div className="img-div">
          <img
            src={src}
            alt=""
            className="aspect-square object-cover rounded-[20px]"
          />
        </div>
        <div className="overlay absolute top-0 left-0 w-full h-full bg-none rounded-[20px]"></div>
        <div className="project-content p-3 lg:px-6 lg:py-5 flex flex-col absolute bottom-0 left-0 opacity-0 trangray-y-[5%] transition-all duration-[0.3s]">
          <h1 className="title text-white text-[2.2rem] font-bold">{title}</h1>
          <p className="text-gray-300 text-[1.05rem] leading-[1.40rem]">
            {desc}
          </p>
          <div className="tech text-white flex flex-wrap gap-3 mt-3">
            <span className="bg-gray-600 rounded-full px-3 text-[0.9rem] tracking-wider">
              {tech1}
            </span>
            <span className="bg-gray-600 rounded-full px-3 text-[0.9rem] tracking-wider">
              {tech2}
            </span>
            <span className="bg-gray-600 rounded-full px-3 text-[0.9rem] tracking-wider">
              {tech3}
            </span>
            <span className="bg-gray-600 rounded-full px-3 text-[0.9rem] tracking-wider">
              {tech4}
            </span>
          </div>
          <div className="preview-btn mt-6">
            <a
              href={link}
              target="_blank"
              className="bg-gray-300 px-8 py-1.5 w-[60%] md:w-[55%] rounded-lg tracking-wide flex justify-center items-center"
            >
              <SquareArrowUpRightIcon className="mr-2" color="#4b5563" />
              <span className="text-neutral-800">Live Preview</span>
            </a>
          </div>
        </div>
      </div>
    </>
  );
};
