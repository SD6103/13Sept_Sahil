import { createSlice } from "@reduxjs/toolkit";

const users = createSlice({
  name: "user",
  initialState: {
    usersList: [],
    selectedUser: null,
  },
  reducers: {
    showUser: (state, action) => {
      state.usersList = action.payload; // Update state with fetched users
    },
    addUser: (state, action) => {
      state.usersList.push(action.payload);
    },
    deleteUser: (state, action) => {
      state.usersList = state.usersList.filter(
        (user) => user.id !== action.payload
      );
    },
    // setUsers: (state, action) => {
    //   state.users = action.payload;
    // },
    selectUserForEdit: (state, action) => {
      state.selectedUser = action.payload;
    },
    clearSelectedUser: (state) => {
      state.selectedUser = null;
    },
  },
});

export const {
  showUser,
  addUser,
  deleteUser,
  setUsers,
  selectUserForEdit,
  clearSelectedUser,
} = users.actions;
export default users.reducer;
