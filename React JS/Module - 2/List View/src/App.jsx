import React from "react";
import { Data } from "./Data";

export const App = () => {
  return (
    <>
      <header>
        <nav className="bg-slate-300 flex flex-col md:flex-row justify-center items-center gap-5 md:gap-12 py-5">
          <a href="#" className="font-semibold text-[1.1rem]">
            Designer
          </a>
          <a href="#" className="font-semibold text-[1.1rem]">
            Category
          </a>
          <a href="#" className="font-semibold text-[1.1rem]">
            Attention
          </a>
        </nav>
      </header>

      <Data />
    </>
  );
};
