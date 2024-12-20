import React from "react";
import { useDispatch, useSelector } from "react-redux";
import { increament, decreament } from "../Redux/CounterSlice";

export const Counter = () => {
  const dispatch = useDispatch();
  const counter = useSelector((state) => state.counter.count);
  // explaination of counter : we have used state.counter.count means useSelector provied a state using that state we access the counter which is defined in store.js as a key in reducers and then using that couner we acccess the initial state of slice which is 0.

  const handleIncreament = () => {
    dispatch(increament());
  };

  const handleDecreament = () => {
    dispatch(decreament());
  };

  return (
    <>
      <div className="flex flex-col justify-center items-center h-screen gap-5">
        <div className="counter">
          <h1 className="text-[2.5rem]">{counter}</h1>
        </div>
        <div className="btns flex justify-center items-center gap-5">
          <button
            onClick={handleIncreament}
            className="bg-green-500 px-5 py-2 text-[1.1rem] rounded-md"
          >
            Increament
          </button>
          <button
            onClick={handleDecreament}
            className="bg-red-500 px-5 py-2 text-[1.1rem] rounded-md"
          >
            Decreament
          </button>
        </div>
      </div>
    </>
  );
};
