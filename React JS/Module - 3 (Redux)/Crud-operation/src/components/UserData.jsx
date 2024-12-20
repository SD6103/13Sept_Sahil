import React, { useEffect, useState } from "react";
import { Card, Typography } from "@material-tailwind/react";
import { PencilEdit02Icon, Delete02Icon } from "hugeicons-react";
import { showUser, deleteUser, selectUserForEdit } from "../redux/UserSlice";
import { useDispatch, useSelector } from "react-redux";
import axios from "axios";
import toast from "react-hot-toast";
import { useNavigate } from "react-router-dom";

export const UserData = () => {
  const dispatch = useDispatch();
  const navigate = useNavigate();
  const users = useSelector((state) => state.users.usersList);
  // console.log(users);

  const fetchData = async () => {
    try {
      const res = await axios.get(`http://localhost:1234/users`);
      // console.log(res.data);
      dispatch(showUser(res.data));
    } catch (error) {
      console.log(error);
    }
  };

  useEffect(() => {
    fetchData();
  }, [dispatch]);

  const removeUser = async (id) => {
    // console.log(id);
    try {
      await axios.delete(`http://localhost:1234/users/${id}`);
      dispatch(deleteUser(id));
      toast.success("User deleted successfully!");
    } catch (error) {
      console.log(error);
    }
  };

  const handleEdit = (user) => {
    dispatch(selectUserForEdit(user));
    navigate("/");
  };

  const TABLE_HEAD = [
    "Full Name",
    "Email",
    "Mobile Number",
    "City",
    "Edit",
    "Delete",
  ];
  return (
    <>
      <div className="user-data flex flex-col justify-center items-center py-10 gap-8">
        <div className="heading">
          <h1 className="text-[2rem] font-semibold">Users Data</h1>
        </div>
        <Card className="h-full w-fit">
          <table className="w-[80%] min-w-max table-auto text-left bg-stone-100">
            <thead>
              <tr>
                {TABLE_HEAD.map((head) => (
                  <th
                    key={head}
                    className="border-b border-gray-100 bg-neutral-300 p-4 text-[1.1rem]"
                  >
                    <Typography
                      variant="small"
                      color="black"
                      className="font-bold leading-none opacity-80"
                    >
                      {head}
                    </Typography>
                  </th>
                ))}
              </tr>
            </thead>
            <tbody>
              {users.map(({ id, fullname, email, mobileno, city }, index) => {
                const isLast = index === users.length - 1;
                const classes = isLast ? "p-4" : "p-4 border-b border-gray-300";

                return (
                  <tr key={id}>
                    <td className={classes}>
                      <Typography
                        variant="small"
                        color="blue-gray"
                        className="font-normal w-40"
                      >
                        {fullname}
                      </Typography>
                    </td>
                    <td className={classes}>
                      <Typography
                        variant="small"
                        color="blue-gray"
                        className="font-normal w-40"
                      >
                        {email}
                      </Typography>
                    </td>
                    <td className={classes}>
                      <Typography
                        variant="small"
                        color="blue-gray"
                        className="font-normal w-40"
                      >
                        {mobileno}
                      </Typography>
                    </td>
                    <td className={classes}>
                      <Typography
                        variant="small"
                        color="blue-gray"
                        className="font-normal w-32"
                      >
                        {city}
                      </Typography>
                    </td>
                    <td className={classes}>
                      <button
                        onClick={() =>
                          handleEdit({
                            id,
                            fullname,
                            email,
                            mobileno,
                            city,
                          })
                        }
                        className="bg-[#355bcb] hover:bg-[#1e32cd] p-1.5 rounded-[3px] transition-all duration-300 text-center"
                      >
                        <PencilEdit02Icon
                          color="white"
                          size={20}
                          strokeWidth={2}
                        />
                      </button>
                    </td>
                    <td className={classes} style={{ textAlign: "center" }}>
                      <button
                        onClick={() => removeUser(id)}
                        className="bg-[#ff4747] hover:bg-[#ff2e2e] p-1.5 rounded-[3px] transition-all duration-300 "
                      >
                        <Delete02Icon color="white" size={20} strokeWidth={2} />
                      </button>
                    </td>
                  </tr>
                );
              })}
            </tbody>
          </table>
        </Card>
      </div>
    </>
  );
};
