const express = require("express");
const bcrypt = require("bcrypt");
const userModel = require("../models/userModel");
const router = express.Router();

router.post("/register", async (req, res) => {
  try {
    const { fullname, email, password } = req.body;
    const existingUser = await userModel.findOne({ email });

    if (existingUser) return res.send("Email already exists!");

    const hashedPassword = await bcrypt.hash(password, 10);

    const createduser = await userModel.create({
      fullname,
      email,
      password: hashedPassword,
    });
    res.send(createduser);
  } catch (error) {
    console.log(error.message);
  }
});

router.post("/login", async (req, res) => {
  try {
    const { email, password } = req.body;
    const user = await userModel.findOne({ email: email });
    if (!user) return res.send("This email is not registered!");
    const isPasswordValid = await bcrypt.compare(password, user.password);
    if (!isPasswordValid) {
      return res.status(401).json({ message: "Invalid password!" });
    }
    return res.send("You can login!");
  } catch (error) {
    console.log(error.message);
  }
});

router.put("/:id", async (req, res) => {
  try {
    const user = await userModel.findOneAndUpdate({ _id: req.params.id });
    res.send("User updated! : ", user);
  } catch (error) {
    console.log(error.message);
  }
});

router.delete("/delete/:id", async (req, res) => {
  try {
    const deletedUser = await userModel.findOneAndDelete({
      _id: req.params.id,
    });
    res.send("User delete!");
  } catch (error) {
    console.log(error.message);
  }
});

module.exports = router;
