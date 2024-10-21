import React, { useEffect, useRef, useState } from "react";
import { Add01Icon, Delete02Icon, PencilEdit01Icon } from "hugeicons-react";
import toast, { Toaster } from "react-hot-toast";
import axios from "axios";

export const Tasks = () => {
  let [task, setTask] = useState([]); // Initialize task as an empty array
  const taskInput = useRef(null); // UseRef for input

  // Submit handler for adding a task
  const handleSubmit = (e) => {
    e.preventDefault();

    let taskData = {
      task: taskInput.current.value,
      time: new Date().toLocaleString(),
    };

    axios
      .post(`http://localhost:1234/tasks`, taskData)
      .then((response) => {
        // Add new task to the state directly for instant feedback
        setTask((prevTasks) => [...prevTasks, response.data]);
        toast.success("Task added successfully!");
        e.target.reset(); // Clear input field
      })
      .catch((error) => {
        toast.error("Failed to add task.");
        console.error(error);
      });
  };

  // Fetch tasks from the server
  const fetchTask = () => {
    axios
      .get(`http://localhost:1234/tasks`)
      .then((res) => {
        setTask(res.data); // Set the task state with the fetched data
      })
      .catch((error) => {
        toast.error("Failed to fetch tasks.");
        console.error(error);
      });
  };

  // Fetch tasks only when the component mounts
  useEffect(() => {
    fetchTask();
  }, []); // Empty dependency array ensures it runs only once on mount

  return (
    <>
      <div className="task-container flex flex-col justify-center items-center bg-white px-5 py-5 gap-3 rounded-md shadow-md w-96">
        <div className="heading self-start">
          <h1 className="text-[1.3rem] font-bold">Todo App</h1>
        </div>

        {/* Task input form */}
        <form
          className="flex justify-center items-center gap-1.5 w-full"
          onSubmit={handleSubmit}
        >
          <input
            type="text"
            ref={taskInput} // Reference the input
            placeholder="Enter task"
            className="border border-1 border-gray-400 rounded-[5px] px-3 py-2 w-full"
          />
          <button
            type="submit"
            className="bg-cyan-500 px-2.5 py-2.5 rounded-[5px]"
          >
            <Add01Icon color="white" size={24} strokeWidth={3} />
          </button>
          <Toaster position="top-right" reverseOrder={false} />
        </form>

        {/* Task list */}
        <div className="tasks-box bg-gray-200 w-full h-72 max-h-72 rounded-md my-2 px-2.5 py-2.5 flex flex-col gap-2 overflow-y-scroll">
          {task.length > 0 ? (
            task.map((item) => {
              return (
                <div
                  key={item.id}
                  className="tasks-list flex justify-between items-center gap-4 bg-white px-3 py-3 rounded-md"
                >
                  <div className="task-item flex flex-col">
                    <span className="break-all">{item.task}</span>
                    <span className="text-[0.8rem] text-gray-500">
                      {item.time}
                    </span>
                  </div>
                  <div className="actions flex justify-center items-center gap-2.5">
                    <button className="bg-green-500 p-1 rounded-[3px]">
                      <PencilEdit01Icon
                        color="#fff"
                        size={22}
                        strokeWidth={2}
                      />
                    </button>
                    <button className="bg-red-500 p-1 rounded-[3px]">
                      <Delete02Icon color="#fff" size={22} strokeWidth={2} />
                    </button>
                  </div>
                </div>
              );
            })
          ) : (
            <p>No tasks available</p>
          )}
        </div>

        {/* Footer with task count */}
        <div className="footer w-full flex justify-between items-center">
          <span className="text-[1rem] font-semibold">
            Total Tasks: {task.length}
          </span>
          <button className="bg-[#ed4444] text-white px-4 py-1.5 rounded-md text-[1rem]">
            Clear All
          </button>
        </div>
      </div>
    </>
  );
};
