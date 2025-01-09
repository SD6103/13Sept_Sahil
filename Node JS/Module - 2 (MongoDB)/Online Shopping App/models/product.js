const mongoose = require("mongoose");

mongoose.connect("mongodb://127.0.0.1:27017/onlineshoppingapp");

const productSchema = mongoose.Schema({
  title: { type: String, require: true },
  desc: { type: String, require: true },
  price: { type: Number, require: true },
});

module.exports = mongoose.model("product", productSchema);
