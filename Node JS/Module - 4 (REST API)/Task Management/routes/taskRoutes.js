const express = require("express");
const taskModel = require("../models/taskModel");
const router = express.Router();

router.get("/", async (req, res) => {
  try {
    const tasks = await taskModel.find();
    res.send(tasks);
  } catch (error) {
    console.log(error.message);
  }
});

router.post("/add", async (req, res) => {
  try {
    const { task, desc } = req.body;
    const addedTask = await taskModel.create({
      task,
      desc,
    });
    res.send(addedTask);
  } catch (error) {
    console.log(error.message);
  }
});

router.put("/edit/:id", async (req, res) => {
  try {
    const updatedTask = await taskModel.findOneAndUpdate(
      req.params.id,
      req.body,
      {
        new: true,
      }
    );
    res.send("Task updated : ", updatedTask);
  } catch (error) {
    console.log(error.message);
  }
});

router.delete("/delete/:id", async (req, res) => {
  try {
    const deletedTask = await taskModel.findOneAndDelete(req.params.id);
    res.send("Task deleted!");
  } catch (error) {
    console.log(error.message);
  }
});

module.exports = router;
