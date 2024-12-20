import React from "react";
import { Form } from "./components/Form";
import { Toaster } from "react-hot-toast";

export const App = () => {
  return (
    <>
      <Form />
      <Toaster position="top-right" reverseOrder={false} />
    </>
  );
};
