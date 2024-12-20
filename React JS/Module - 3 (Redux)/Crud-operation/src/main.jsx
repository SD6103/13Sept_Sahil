import { StrictMode } from "react";
import { createRoot } from "react-dom/client";
import "./index.css";
import { App } from "./App.jsx";
import { BrowserRouter as Router, Routes, Route } from "react-router-dom";
import { UserData } from "./components/UserData.jsx";
import { Provider } from "react-redux";
import { store } from "./redux/store.js";

createRoot(document.getElementById("root")).render(
  <Provider store={store}>
    <Router>
      <Routes>
        <Route path="/" element={<App />} />
        <Route path="/user-data" element={<UserData />} />
      </Routes>
    </Router>
  </Provider>
);
