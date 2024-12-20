// src/App.jsx
import React, { useEffect } from "react";
import { Outlet } from "react-router-dom";
import { Header } from "./Components/Header";
import { Footer } from "./Components/Footer";
import { useSelector } from "react-redux"; // useSelector to access Redux state

export const App = () => {
  const themeMode = useSelector((state) => state.theme.mode); // Access theme mode from Redux store

  // Apply theme class to <html>
  useEffect(() => {
    document.documentElement.classList.toggle("dark", themeMode === "dark");
  }, [themeMode]);

  return (
    <div
      className={`userlayout ${
        themeMode === "dark" ? "dark-theme" : "light-theme"
      }`}
    >
      {/* Add the dark class here */}
      <Header />
      <Outlet />
      <Footer />
    </div>
  );
};
