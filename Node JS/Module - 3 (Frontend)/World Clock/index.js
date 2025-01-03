const express = require("express");
const moment = require("moment-timezone");
const { getCode } = require("country-list"); // Add this line to use country-list package

const app = express();

// Middleware to parse form data
app.use(express.urlencoded({ extended: true }));

// Set EJS as the view engine
app.set("view engine", "ejs");
app.use(express.static("public"));

// Route to render the form
app.get("/", (req, res) => {
  res.render("index", { country: null, time: null, error: null });
});

// Route to handle form submission
app.post("/", (req, res) => {
  const countryName = req.body.country.trim();

  try {
    // Convert the full country name to country code
    const countryCode = getCode(countryName);

    if (!countryCode) {
      return res.render("index", {
        time: null,
        error: "Invalid country name.",
      });
    }

    // Use moment-timezone to find the matching timezone using country code
    const timezone = moment.tz.zonesForCountry(countryCode, true)[0]?.name;

    if (timezone) {
      const currentTime = moment().tz(timezone).format("HH:mm");
      res.render("index", {
        country: countryName,
        time: currentTime,
        error: null,
      });
    } else {
      res.render("index", {
        country: countryName,
        time: null,
        error: "No timezone found for the specified country.",
      });
    }
  } catch (err) {
    // Log the error for debugging
    console.error("Error:", err);

    res.render("index", {
      country: null,
      time: null,
      error: "An error occurred while processing your request.",
    });
  }
});

// Start the server
const PORT = 3000;
app.listen(PORT, () => {
  console.log(`Server running at http://localhost:${PORT}`);
});
