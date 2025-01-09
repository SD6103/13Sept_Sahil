const express = require("express");
const app = express();
const path = require("path");
const mongoose = require("mongoose");
const userModel = require("./models/user.js");
const productModel = require("./models/product.js");
const cookieParser = require("cookie-parser");
const bodyParser = require("body-parser");
app.set("view engine", "ejs");
app.use(bodyParser.urlencoded({ extended: true }));
app.use(express.static(path.join(__dirname, "public")));
app.use(cookieParser());

mongoose
  .connect("mongodb://localhost:27017/onlineshoppingapp")
  .then(() => {
    console.log("mongodb connected!");
  })
  .catch((err) => {
    console.log(err);
  });

app.get("/", async (req, res) => {
  const products = await productModel.find();
  res.render("index", { products });
});

app.get("/register", (req, res) => {
  res.render("register");
});

app.post("/register", async (req, res) => {
  try {
    const user = await userModel.create({
      name: req.body.name,
      email: req.body.email,
      password: req.body.password,
    });

    res.redirect("/");
  } catch (err) {
    console.log(err);
    res.status(500).send("Error while createing user!");
  }
});

app.get("/addproduct", (req, res) => {
  res.render("addproduct", { action: "/addproduct", product: null });
});

app.post("/addproduct", async (req, res) => {
  try {
    const { title, desc, price } = req.body;
    const products = productModel.create({
      title,
      desc,
      price,
    });
    res.redirect("/addproduct");
  } catch (error) {
    console.log(error);
  }
});

app.get("/edit/:id", async (req, res) => {
  try {
    const product = await productModel.findById(req.params.id);
    if (!product) return res.status(404).send("product not found!");

    res.render("addproduct", {
      action: `/edit/${req.params.id}`,
      product,
    });
  } catch (error) {
    console.log(error);
  }
});

app.post("/edit/:id", async (req, res) => {
  try {
    const { title, description, price } = req.body;

    // Update the product with the provided data
    const updatedProduct = await productModel.findByIdAndUpdate(
      req.params.id, // Make sure the ID is correctly passed here
      { title, description, price },
      { new: true } // Ensures the updated document is returned
    );

    res.redirect("/");
  } catch (err) {
    console.log(err);
    res.status(500).send("Error updating product");
  }
});

app.get("/delete/:id", async (req, res) => {
  try {
    await productModel.findByIdAndDelete(req.params.id); // Pass the ID directly

    res.redirect("/"); // Redirect to the homepage or another page after deletion
  } catch (err) {
    console.log(err);
    res.status(500).send("Error deleting product");
  }
});

app.listen(3000, () => {
  console.log(`http://localhost:3000`);
});
