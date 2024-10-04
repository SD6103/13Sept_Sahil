import { useState } from "react";

export function App() {
  const [toggle, setToggle] = useState(true);

  function toggleLogin() {
    setToggle(!toggle);
  }

  return (
    <>
      <nav className="flex justify-between items-center px-10 py-6 bg-cyan-600">
        <div className="logo text-[1.2rem] text-white">Logo</div>
        <div className="login text-[1.2rem] text-white" onClick={toggleLogin}>
          {toggle === true ? "Login" : "Logout"}
        </div>
      </nav>
    </>
  );
}
