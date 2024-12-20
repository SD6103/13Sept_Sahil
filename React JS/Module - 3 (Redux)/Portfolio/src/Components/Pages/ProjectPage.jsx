import React from "react";
import { ProjectCard } from "../common/ProjectCard";

export const ProjectPage = () => {
  return (
    <>
      <data-scroll-section>
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

              {/* <div className="project w-[100%] md:w-[70%] lg:w-[40%] xl:w-[30%] h-fit relative rounded-[20px]">
                <div className="img-div">
                  <img
                    src="src/assets/img/airline.png"
                    alt=""
                    className="aspect-square object-cover rounded-[20px]"
                  />
                </div>
                <div className="overlay absolute top-0 left-0 w-full h-full bg-none rounded-[20px]"></div>
                <div className="project-content p-3 lg:px-6 lg:py-5 flex flex-col absolute bottom-0 left-0 opacity-0 trangray-y-[5%] transition-all duration-[0.3s]">
                  <h1 className="title text-white text-[2.2rem] font-bold">
                    Airline
                  </h1>
                  <p className="text-gray-100 text-[1.05rem] leading-[1.40rem]">
                    Airline is an online airline booking website that allows
                    users to search for flights, select travel dates, and book
                    tickets while providing customer details for a seamless
                    booking experience.
                  </p>
                  <div className="tech text-white flex flex-wrap gap-3 mt-3">
                    <span className="bg-zinc-500 rounded-full px-3 text-[0.9rem] tracking-wider">
                      HTML
                    </span>
                    <span className="bg-zinc-500 rounded-full px-3 text-[0.9rem] tracking-wider">
                      CSS
                    </span>
                    <span className="bg-zinc-500 rounded-full px-3 text-[0.9rem] tracking-wider">
                      JavaScript
                    </span>
                    <span className="bg-zinc-500 rounded-full px-3 text-[0.9rem] tracking-wider">
                      Tailwind CSS
                    </span>
                  </div>
                  <div className="preview-btn mt-6">
                    <a
                      href="https://airliine.netlify.app/"
                      target="_blank"
                      className="bg-gray-300 px-8 py-1.5 w-[60%] md:w-[55%] rounded-lg tracking-wide flex justify-center items-center"
                    >
                      <FontAwesomeIcon
                        icon={faSquareArrowUpRight}
                        className="mr-2 text-gray-600"
                      />
                      Live Preview
                    </a>
                  </div>
                </div>
              </div> */}
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

              {/* <div className="project w-[100%] md:w-[70%] lg:w-[40%] xl:w-[30%] h-fit relative rounded-[20px]">
                <div className="img-div">
                  <img
                    src="src/assets/img/interia.png"
                    alt=""
                    className="aspect-square object-cover rounded-[20px]"
                  />
                </div>
                <div className="overlay absolute top-0 left-0 w-full h-full bg-none rounded-[20px]"></div>
                <div className="project-content p-3 lg:px-6 lg:py-5 flex flex-col absolute bottom-0 left-0 opacity-0 trangray-y-[5%] transition-all duration-[0.3s]">
                  <h1 className="title text-white text-[2.2rem] font-bold">
                    Interia
                  </h1>
                  <p className="text-gray-100 text-[1.05rem] leading-[1.40rem]">
                    Interia is an interior design portfolio website showcasing
                    creative designs, projects, and inspirations, allowing users
                    to explore various styles and solutions for home and office
                    spaces.
                  </p>
                  <div className="tech text-white flex flex-wrap gap-3 mt-3">
                    <span className="bg-zinc-500 rounded-full px-3 text-[0.9rem] tracking-wider">
                      HTML
                    </span>
                    <span className="bg-zinc-500 rounded-full px-3 text-[0.9rem] tracking-wider">
                      CSS
                    </span>
                    <span className="bg-zinc-500 rounded-full px-3 text-[0.9rem] tracking-wider">
                      JAvaScript
                    </span>
                    <span className="bg-zinc-500 rounded-full px-3 text-[0.9rem] tracking-wider">
                      Tailwind CSS
                    </span>
                  </div>
                  <div className="preview-btn mt-6">
                    <a
                      href="https://interiia.netlify.app/"
                      target="_blank"
                      className="bg-gray-300 px-8 py-1.5 w-[60%] md:w-[55%] rounded-lg tracking-wide flex justify-center items-center"
                    >
                      <FontAwesomeIcon
                        icon={faSquareArrowUpRight}
                        className="mr-2 text-gray-600"
                      />
                      Live Preview
                    </a>
                  </div>
                </div>
              </div> */}

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

              {/* <div className="project w-[100%] md:w-[70%] lg:w-[40%] xl:w-[30%] h-fit relative rounded-[20px]">
                <div className="img-div">
                  <img
                    src="src/assets/img/skyhigh.png"
                    alt=""
                    className="aspect-square object-cover rounded-[20px]"
                  />
                </div>
                <div className="overlay absolute top-0 left-0 w-full h-full bg-none rounded-[20px]"></div>
                <div className="project-content p-3 lg:px-6 lg:py-5 flex flex-col absolute bottom-0 left-0 opacity-0 trangray-y-[5%] transition-all duration-[0.3s]">
                  <h1 className="title text-white text-[2.2rem] font-bold">
                    SkyHigh
                  </h1>
                  <p className="text-gray-100 text-[1.05rem] leading-[1.40rem]">
                    SkyHigh is a portfolio dedicated to the art of skyscraper
                    design, blending futuristic vision with groundbreaking
                    engineering to create iconic vertical landscapes that
                    redefine city skylines.
                  </p>
                  <div className="tech text-white flex flex-wrap gap-3 mt-3">
                    <span className="bg-zinc-500 rounded-full px-3 text-[0.9rem] tracking-wider">
                      HTML
                    </span>
                    <span className="bg-zinc-500 rounded-full px-3 text-[0.9rem] tracking-wider">
                      CSS
                    </span>
                    <span className="bg-zinc-500 rounded-full px-3 text-[0.9rem] tracking-wider">
                      JAvaScript
                    </span>
                    <span className="bg-zinc-500 rounded-full px-3 text-[0.9rem] tracking-wider">
                      Tailwind CSS
                    </span>
                  </div>
                  <div className="preview-btn mt-6">
                    <a
                      href="https://skyhiigh.netlify.app/"
                      target="_blank"
                      className="bg-gray-300 px-8 py-1.5 w-[60%] md:w-[55%] rounded-lg tracking-wide flex justify-center items-center"
                    >
                      <FontAwesomeIcon
                        icon={faSquareArrowUpRight}
                        className="mr-2 text-gray-600"
                      />
                      Live Preview
                    </a>
                  </div>
                </div>
              </div> */}
            </div>
          </div>
        </div>
      </data-scroll-section>
    </>
  );
};
