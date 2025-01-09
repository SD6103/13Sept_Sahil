const mongoose = require("mongoose");

const productCategorySchema = mongoose.Schema({
  name: { type: String, require: true },
  desc: { type: String },
});

module.exports = mongoose.model("productCategory", productCategorySchema);
