const express = require("express");
const bodyParser = require("body-parser");
const app = express();

const taskRoutes = require("./routes/taskRoutes");

app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: true }));

app.use("/tasks", taskRoutes);

app.listen(3000, () => {
  console.log("http://localhost:3000");
});
