const mongoose = require("mongoose");

mongoose
  .connect("mongodb://127.0.0.1:27017/todoapp")
  .then(() => {
    console.log("connected");
  })
  .catch((err) => {
    console.log(err);
  });

const taskSchema = mongoose.Schema({
  task: String,
  time: {
    type: String,
    default: new Date().toLocaleTimeString([], {
      hour: "2-digit",
      minute: "2-digit",
      hour12: true,
    }),
  },
});

module.exports = mongoose.model("task", taskSchema);
