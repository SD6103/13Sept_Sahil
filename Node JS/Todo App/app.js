const express = require("express");
const app = express();
const path = require("path");

const taskModel = require("./models/task-model");

app.set("view engine", "ejs");
app.use(express.urlencoded({ extended: true }));
app.use(express.static(path.join(__dirname, "public")));

app.get("/", async (req, res) => {
  try {
    const tasks = await taskModel.find();
    res.render("index", { tasks, editTask: null });
  } catch (error) {
    console.log(error);
  }
});

app.post("/add", async (req, res) => {
  try {
    await taskModel.create({
      task: req.body.task,
    });
    res.redirect("/");
  } catch (error) {
    console.log(error);
  }
});

app.get("/edit/:id", async (req, res) => {
  const tasks = await taskModel.find();
  const editTask = await taskModel.findOne({ _id: req.params.id });
  res.render("index", { tasks, editTask });
});

app.post("/update/:id", async (req, res) => {
  await taskModel.findByIdAndUpdate(req.params.id, {
    task: req.body.task,
    time: new Date().toLocaleTimeString([], {
      hour: "2-digit",
      minute: "2-digit",
      hour12: true,
    }),
  });
  res.redirect("/");
});

app.get("/delete/:id", async (req, res) => {
  try {
    await taskModel.findOneAndDelete({ _id: req.params.id });
    res.redirect("/");
  } catch (error) {
    console.log(error);
  }
});

app.get("/deleteall", async (req, res) => {
  try {
    await taskModel.deleteMany();
    res.redirect("/");
  } catch (error) {
    console.log(error);
  }
});

app.listen(3000, () => {
  console.log(`http://localhost:3000`);
});
