import { StrictMode } from "react";
import { createRoot } from "react-dom/client";
import "./index.css";
import MoveUsingState from "./Components/MoveUsingState";
import { MoveUsingEffect } from "./Components/MoveUsingEffect";

createRoot(document.getElementById("root")).render(
  <StrictMode>
    {/* <MoveUsingState /> */}
    <MoveUsingEffect />
  </StrictMode>
);
