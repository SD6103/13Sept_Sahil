import React, { useEffect, useRef, useState } from "react";
import { Link } from "react-router-dom";
import toast from "react-hot-toast";
import { useDispatch, useSelector } from "react-redux";
import { addUser, clearSelectedUser } from "../redux/UserSlice";
import axios from "axios";

export const Form = () => {
  const dispatch = useDispatch();
  const selectedUser = useSelector((state) => state.users.selectedUser);
  // const fullnameInp = useRef(null);
  // const emailInp = useRef(null);
  // const mobilenoInp = useRef(null);
  // const cityInp = useRef(null);

  const [formData, setFormData] = useState({
    fullname: "",
    email: "",
    mobileno: "",
    city: "",
  });

  useEffect(() => {
    if (selectedUser) {
      setFormData({
        fullname: selectedUser.fullname || "",
        email: selectedUser.email || "",
        mobileno: selectedUser.mobileno || "",
        city: selectedUser.city || "",
      });
    } else {
      setFormData({
        fullname: "",
        email: "",
        mobileno: "",
        city: "",
      });
    }

    return () => dispatch(clearSelectedUser());
  }, [selectedUser, dispatch]);

  const handleInputChange = (e) => {
    const { name, value } = e.target;
    setFormData({
      ...formData,
      [name]: value,
    });
  };

  const showToast = (e, message, ref) => {
    e.preventDefault();
    toast.error(message);
    if (ref && ref.current) {
      ref.current.focus();
    }
  };

  const addNewUser = (e) => {
    e.preventDefault();
    // const fullname = fullnameInp.current.value;
    // const email = emailInp.current.value;
    // const mobileno = mobilenoInp.current.value;
    // const city = cityInp.current.value;
    // console.log(fullname);

    const { fullname, email, mobileno, city } = formData;

    const fullNameRegex = /^[a-zA-Z ]+$/;
    const emailRegex =
      /^(([^<>()[\]\.,;:\s@\"]+(\.[^<>()[\]\.,;:\s@\"]+)*)|(\".+\"))@(([^<>()[\]\.,;:\s@\"]+\.)+[^<>()[\]\.,;:\s@\"]{2,})$/i;
    const mobilenoRegex = /^\d{1,10}$/;
    const cityRegex = /^[A-Za-z]+(?:[\s-][A-Za-z]+)*$/;

    !fullname || !email || !mobileno || !city
      ? showToast(e, "Please fill all the fields!", formData.fullname)
      : !fullNameRegex.test(fullname)
      ? showToast(e, "Please enter proper full name!", formData.fullname)
      : !emailRegex.test(email)
      ? showToast(e, "Please enter valid email address!", formData.email)
      : !mobilenoRegex.test(mobileno)
      ? showToast(e, "Please enter valid mobile number!", formData.mobileno)
      : !cityRegex.test(city)
      ? showToast(e, "Please enter valid city!", formData.city)
      : storeData(e);
  };

  const storeData = async (e) => {
    e.preventDefault();
    const newUser = {
      id: selectedUser ? selectedUser.id : Date.now(),
      ...formData,
    };

    try {
      if (selectedUser && selectedUser.id) {
        await axios.put(
          `http://localhost:1234/users/${selectedUser.id}`,
          newUser
        );
        toast.success("User updated successfully!");
      } else {
        const response = await axios.post(
          `http://localhost:1234/users`,
          newUser
        );
        dispatch(addUser(response.data));
        toast.success("User added successfully!");
      }

      // fullnameInp.current.value = "";
      // emailInp.current.value = "";
      // mobilenoInp.current.value = "";
      // cityInp.current.value = "";
      setFormData({
        fullname: "",
        email: "",
        mobileno: "",
        city: "",
      });

      dispatch(clearSelectedUser());
    } catch (error) {
      console.log(error);
    }
  };
  return (
    <>
      <div className="form">
        <div className="contact py-10 md:py-12 lg:py-14 px-5 sm:px-10 md:px-15 lg:px-20 flex flex-col justify-center items-center gap-10">
          <form
            onSubmit={addNewUser}
            className="w-full md:w-[50%] lg:w-[65%] flex flex-col gap-8 bg-gray-300 px-4 md:px-10 py-8 md:py-14 rounded-lg"
          >
            <div className="input-control">
              <input
                name="fullname"
                value={formData.fullname}
                onChange={handleInputChange}
                // ref={fullnameInp}
                type="text"
                placeholder="Full Name"
                className="w-full text-[1.10rem] px-5 py-5 rounded-lg bg-gray-200 text-black placeholder-gray-500 focus:outline-none focus:bg-white"
              />
            </div>
            <div className="input-control">
              <input
                name="email"
                value={formData.email}
                onChange={handleInputChange}
                // ref={emailInp}
                type="email"
                placeholder="Email Address"
                className="w-full text-[1.10rem] px-5 py-5 rounded-lg bg-gray-200 text-black placeholder-gray-500 focus:outline-none focus:bg-white"
              />
            </div>
            <div className="input-control">
              <input
                name="mobileno"
                value={formData.mobileno}
                onChange={handleInputChange}
                // ref={mobilenoInp}
                type="text"
                placeholder="Mobile Number"
                className="w-full text-[1.10rem] px-5 py-5 rounded-lg bg-gray-200 text-black placeholder-gray-500 focus:outline-none focus:bg-white"
              />
            </div>
            <div className="input-control">
              <input
                name="city"
                value={formData.city}
                onChange={handleInputChange}
                // ref={cityInp}
                type="text"
                placeholder="City"
                className="w-full text-[1.10rem] px-5 py-5 rounded-lg bg-gray-200 text-black placeholder-gray-500 focus:outline-none focus:bg-white"
              />
            </div>
            <div className="input-control text-center md:text-start flex justify-between items-center">
              <button
                // onClick={addNewUser}
                className="bg-gray-900  text-white rounded-lg w-full md:w-[40%] lg:w-[28%] py-3 text-[1.1rem] font-bold tracking-wider "
              >
                {selectedUser ? "Update User" : "Add User"}
              </button>
              <Link
                to="user-data"
                className="bg-neutral-800 text-white rounded-lg w-full md:w-[40%] lg:w-[28%] py-3 text-[1.1rem] font-bold tracking-wider text-center"
              >
                Show Data
              </Link>
            </div>
          </form>
        </div>
      </div>
    </>
  );
};
