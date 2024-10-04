import React, { useState } from "react";

export const Counter = () => {
  let [counter, setCounter] = useState(0);

  return (
    <>
      <main className="flex flex-col justify-center items-center h-screen gap-10">
        <div className="counter text-[3rem]">{counter}</div>
        <div className="buttons flex justify-center items-center gap-5">
          <button
            className="bg-green-500 px-5 py-2 rounded-md"
            onClick={() => setCounter(counter + 1)}
          >
            Increament
          </button>
          <button
            className="bg-red-500 px-5 py-2 rounded-md"
            onClick={() => (counter > 0 ? setCounter(counter - 1) : counter)}
          >
            Decreament
          </button>
        </div>
      </main>
    </>
  );
};
