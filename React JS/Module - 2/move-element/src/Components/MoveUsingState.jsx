import React, { useState } from "react";

function MoveUsingState() {
  const [position, setPosition] = useState({ x: 0, y: 0 });

  const handleMouseMove = (e) => {
    setPosition({ x: e.clientX, y: e.clientY });
  };

  return (
    <div
      onMouseMove={handleMouseMove}
      className="bg-black h-screen w-screen overflow-hidden"
    >
      <div
        className="absolute w-16 h-16 bg-blue-500 rounded-full transform -translate-x-1/2 -translate-y-1/2 "
        style={{
          left: `${position.x}px`,
          top: `${position.y}px`,
        }}
      />
    </div>
  );
}

export default MoveUsingState;
