const mongoose = require("mongoose");

const reviewSchema = mongoose.Schema({
  fullname: { type: String, require: true },
  email: { type: String, require: true },
  subject: { type: String, require: true },
  message: { type: String, require: true },
});

module.exports = mongoose.model("review", reviewSchema);
