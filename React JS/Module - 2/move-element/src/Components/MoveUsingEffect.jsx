import React, { useEffect, useState } from "react";

export const MoveUsingEffect = () => {
  const [position, setPosition] = useState({ x: 0, y: 0 });

  useEffect(() => {
    const handleMouseMove = (e) => {
      setPosition({ x: e.clientX, y: e.clientY });
    };

    window.addEventListener("mousemove", handleMouseMove);
    return () => window.removeEventListener("mousemove", handleMouseMove);
  }, []);
  return (
    <>
      <div className="bg-black h-screen w-screen overflow-hidden">
        <div
          className="absolute w-16 h-16 bg-blue-500 rounded-full transform -translate-x-1/2 -translate-y-1/2 "
          style={{
            left: `${position.x}px`,
            top: `${position.y}px`,
          }}
        />
      </div>
    </>
  );
};
