const express = require("express");
const productModel = require("../models/productModel");
const router = express.Router();

router.post("/add", async (req, res) => {
  try {
    const { title, desc, stock, price, category } = req.body;

    const addedProduct = await productModel.create({
      title,
      desc,
      stock,
      price,
      category,
    });
    res.send(addedProduct);
  } catch (error) {
    console.log(error.message);
  }
});

router.get("/", async (req, res) => {
  try {
    const products = await productModel.find();
    return res.send(products);
  } catch (error) {
    console.log(error.message);
  }
});

router.get("/:id", async (req, res) => {
  try {
    const product = await productModel.foindOne({ _id: req.params.id });
    if (!product) return res.send("Product not found!");
    else res.send(product);
  } catch (error) {
    console.log(error.message);
  }
});

router.put("/edit/:id", async (req, res) => {
  try {
    const product = await productModel.findOneAndUpdate({ _id: req.params.id });
    res.send("Product updated! : ", product);
  } catch (error) {
    console.log(error.message);
  }
});

router.get("/delete/:id", async (req, res) => {
  try {
    await productModel.findOneAndDelete({
      _id: req.params.id,
    });
    res.send("Poduct deleted!");
  } catch (error) {
    console.log(error.message);
  }
});

module.exports = router;
