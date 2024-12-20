import React from "react";
import { Hero } from "./Hero";
import { About } from "./About";
import { Skill } from "./Skill";
import { Project } from "./Projects";
import { Contact } from "./Contact";

export const Home = () => {
  return (
    <>
      <Hero />
      <About />
      <Skill />
      <Project />
      <Contact />
    </>
  );
};
