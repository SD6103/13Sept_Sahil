import React from "react";
import { ProjectCard } from "./common/ProjectCard";

export const Project = () => {
  return (
    <>
      <div className="projects py-10 md:py-12 lg:py-14 px-5 sm:px-10 md:px-15 lg:px-20 flex flex-col gap-8">
        <div className="text-content mx-auto">
          <h1 className="dark:text-white text-center font-[nusar] text-[2rem] md:text-[2.1rem] lg:text-[2.2rem] tracking-wide">
            Projects
          </h1>
        </div>
        <div className="projects-list flex flex-col gap-12">
          <div className="list flex flex-col md:flex-row justify-center items-center gap-10 lg:gap-16">
            <ProjectCard
              src={`src/assets/img/comiko.png`}
              title={`Comiko`}
              desc={`An online comic book store offers a platform for users to
                    browse, purchase comic books from various genres and
                    publishers, providing a convenient way to access a wide
                    range of titles`}
              tech1={`HTML`}
              tech2={`CSS`}
              tech3={`JavaScript`}
              tech4={`Bootstrap`}
              link={`https://comiko.netlify.app/`}
            />

            <ProjectCard
              src={`src/assets/img/airline.png`}
              title={`Airline`}
              desc={`Airline is an online airline booking website that allows
                    users to search for flights, select travel dates, and book
                    tickets while providing customer details for a seamless
                    booking experience.`}
              tech1={`HTML`}
              tech2={`CSS`}
              tech3={`JavaScript`}
              tech4={`Tailwind CSS`}
              link={`https://airliine.netlify.app/`}
            />
          </div>
          <div className="list flex flex-col md:flex-row justify-center items-center gap-10 lg:gap-16">
            <ProjectCard
              src={`src/assets/img/interia.png`}
              title={`Interia`}
              desc={`Interia is an interior design portfolio website showcasing
                    creative designs, projects, and inspirations, allowing users
                    to explore various styles and solutions for home and office
                    spaces.`}
              tech1={`HTML`}
              tech2={`CSS`}
              tech3={`JavaScript`}
              tech4={`Tailwind CSS`}
              link={`"https://interiia.netlify.app/`}
            />

            <ProjectCard
              src={`src/assets/img/skyhigh.png`}
              title={`SkyHigh`}
              desc={`SkyHigh is a portfolio dedicated to the art of skyscraper
                    design, blending futuristic vision with groundbreaking
                    engineering to create iconic vertical landscapes that
                    redefine city skylines.`}
              tech1={`HTML`}
              tech2={`CSS`}
              tech3={`JavaScript`}
              tech4={`Tailwind CSS`}
              link={`"https://skyhiigh.netlify.app`}
            />
          </div>
        </div>
      </div>
    </>
  );
};
