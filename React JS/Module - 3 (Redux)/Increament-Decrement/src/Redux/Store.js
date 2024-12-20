import { configureStore } from "@reduxjs/toolkit";
import counterReducer from "./CounterSlice"; // access whole counerSLice file named counterReducer

export const store = configureStore({
  reducer: {
    counter: counterReducer, // using whole file means using initialState of slice here
  },
});
