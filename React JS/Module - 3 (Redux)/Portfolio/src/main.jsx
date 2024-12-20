import { StrictMode } from "react";
import { createRoot } from "react-dom/client";
import { BrowserRouter as Router, Routes, Route } from "react-router-dom";
import { Provider } from "react-redux"; // Import Provider from react-redux
import { store } from "./redux/store"; // Correct path to store
import "./index.css"; // Your global CSS
import { Home } from "./Components/Home";
import { App } from "./App";
import { AboutPage } from "./Components/Pages/AboutPage";
import { ContactPage } from "./Components/Pages/ContactPage";
import { ProjectPage } from "./Components/Pages/ProjectPage";

createRoot(document.getElementById("root")).render(
  <StrictMode>
    <Provider store={store}>
      {" "}
      {/* Wrap your app with the Provider */}
      <Router>
        <Routes>
          <Route path="/" element={<App />}>
            <Route index element={<Home />} />
            <Route path="/about-me" element={<AboutPage />} />
            <Route path="/contact-me" element={<ContactPage />} />
            <Route path="/projects" element={<ProjectPage />} />
          </Route>
        </Routes>
      </Router>
    </Provider>
  </StrictMode>
);
