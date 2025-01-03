const express = require("express");
const axios = require("axios");
require("dotenv").config();
const path = require("path");

const app = express();
const port = process.env.PORT || 3000;

app.set("view engine", "hbs");
app.use(express.urlencoded({ extended: true }));
app.use(express.static(path.join(__dirname, "public")));

app.get("/", (req, res) => {
  res.render("index", { weather: null, error: null });
});

app.post("/get-weather", async (req, res) => {
  //   const city = req.body.city;
  //? without destructuring we have to use req.body.city because req.body give an object of all the form fields.

  const { city } = req.body;
  //? with destructuring we dont have to use req.body.city because we have declare that we need city value in the variable using destrcturing method.

  try {
    const weatherResponse = await axios.get(
      `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${process.env.WEATHER_API_KEY}&units=metric`
    );
    const weather = weatherResponse.data;
    weather.main.temp = Math.round(weather.main.temp);
    res.render("index", { weather: weather, error: null });
  } catch (error) {
    res.render("index", { weather: null, error: "City not found!" });
  }
});

app.listen(port, () => {
  console.log(`http://localhost:${port}`);
});
