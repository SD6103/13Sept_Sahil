const mongoose = require("mongoose");

const orderSchema = mongoose.Schema({
  fullname: { type: String, require: true },
  email: { type: String, require: true },
  mobileno: { type: String, require: true },
  address: { type: String, require: true },
  city: { type: String, require: true },
  state: { type: String, require: true },
  products: {
    type: mongoose.Schema.Types.ObjectId,
    ref: "Product",
    required: true,
  },
});

module.exports = mongoose.model("order", orderSchema);
