import { StrictMode } from "react";
import { createRoot } from "react-dom/client";
import "./assets/css/style.css";
import { Tasks } from "./Components/Tasks";

createRoot(document.getElementById("root")).render(
  <StrictMode>
    <Tasks />
  </StrictMode>
);
