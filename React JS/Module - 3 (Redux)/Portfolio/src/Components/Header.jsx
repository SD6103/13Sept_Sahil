// src/Components/Header.js
import React from "react";
import { Link } from "react-router-dom";
import { Sun02Icon, Moon02Icon } from "hugeicons-react";
import { useSelector, useDispatch } from "react-redux";
import { toggleTheme } from "../redux/Slice/ThemeSlice"; // Correct path

export const Header = () => {
  const themeMode = useSelector((state) => state.theme.mode); // Access current theme mode from Redux
  const dispatch = useDispatch();

  // const handleThemeToggle = () => {
  //   dispatch(toggleTheme()); // Dispatch Redux action
  //   const root = document.documentElement; // Access <html> element
  //   if (themeMode === "dark") {
  //     root.classList.remove("dark");
  //   } else {
  //     root.classList.add("dark");
  //   }
  // };

  // Toggle theme
  const handleToggleTheme = () => {
    dispatch(toggleTheme());
    document.documentElement.classList.toggle("dark", theme === "light");
  };

  return (
    <header className="flex justify-between items-center dark:text-white py-5 md:py-7 px-5 sm:px-10 md:px-15 lg:px-20">
      <div className="logo font-extrabold text-3xl md:text-4xl lg:text-5xl">
        <Link to="/" className="select-none font-[airnt]">
          SD
        </Link>
      </div>
      <nav className="hidden md:flex space-x-8 justify-center items-center dark:text-white">
        <Link
          to="/about-me"
          className="font-extrabold tracking-widest text-[0.9rem] hover:text-gray-300 duration-300 cursor-pointer"
        >
          ABOUT ME
        </Link>
        <Link
          to="/projects"
          className="font-extrabold tracking-widest text-[0.9rem] hover:text-gray-300 duration-300 cursor-pointer"
        >
          PROJECTS
        </Link>
        <Link
          to="/contact-me"
          className="font-extrabold tracking-widest text-[0.9rem] hover:text-gray-300 duration-300 cursor-pointer"
        >
          CONTACT ME
        </Link>
        <button
          onClick={handleToggleTheme}
          className="flex justify-center items-center px-2 py-2 transition-all duration-300"
        >
          {themeMode === "dark" ? (
            <Sun02Icon color="white" size={22} strokeWidth={1.5} />
          ) : (
            <Moon02Icon color="black" size={22} strokeWidth={1.5} />
          )}
        </button>
      </nav>
    </header>
  );
};
