const express = require("express");
const app = express();
const userRouter = require("./routes/userRoute");
const productRouter = require("./routes/productRoute");

app.use(express.json());
app.use(express.urlencoded({ extended: true }));

app.use("/user", userRouter);
app.use("/product", productRouter);

app.listen(3000, () => {
  console.log(`http://localhost:3000`);
});
