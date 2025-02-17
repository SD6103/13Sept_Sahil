const mongoose = require("mongoose");

const productSchema = mongoose.Schema({
  title: String,
  desc: String,
  stock: Number,
  price: Number,
  category: String,
});

module.exports = mongoose.model("product", productSchema);
