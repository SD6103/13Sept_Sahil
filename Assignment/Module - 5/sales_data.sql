-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jan 17, 2024 at 06:49 AM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `sales_data`
--

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `cnm` int(11) NOT NULL,
  `cname` varchar(20) DEFAULT NULL,
  `city` varchar(20) DEFAULT NULL,
  `rating` int(11) DEFAULT NULL,
  `sno` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`cnm`, `cname`, `city`, `rating`, `sno`) VALUES
(201, 'Hoffman', 'London', 100, 1001),
(202, 'Giovanne', 'Roe', 200, 1003),
(203, 'Liu', 'San Jose', 300, 1002),
(204, 'Grass', 'Brcelona', 100, 1002),
(206, 'Clemens', 'London', 300, 1007),
(207, 'Pereira', 'Roe', 100, 1004);

-- --------------------------------------------------------

--
-- Table structure for table `salesperson`
--

CREATE TABLE `salesperson` (
  `sno` int(5) NOT NULL,
  `sname` varchar(20) DEFAULT NULL,
  `city` varchar(20) DEFAULT NULL,
  `comm` double DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `salesperson`
--

INSERT INTO `salesperson` (`sno`, `sname`, `city`, `comm`) VALUES
(1001, 'Peel', 'London', 0.12),
(1002, 'Serres', 'San Jose', 0.13),
(1003, 'Axeirod', 'New York', 0.1),
(1004, 'Motika', 'London', 0.11),
(1007, 'Rafkin', 'Barcelona', 0.15);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `customer`
--
ALTER TABLE `customer`
  ADD PRIMARY KEY (`cnm`),
  ADD KEY `sno` (`sno`);

--
-- Indexes for table `salesperson`
--
ALTER TABLE `salesperson`
  ADD PRIMARY KEY (`sno`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `customer`
--
ALTER TABLE `customer`
  MODIFY `cnm` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=208;

--
-- AUTO_INCREMENT for table `salesperson`
--
ALTER TABLE `salesperson`
  MODIFY `sno` int(5) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=1008;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `customer`
--
ALTER TABLE `customer`
  ADD CONSTRAINT `customer_ibfk_1` FOREIGN KEY (`sno`) REFERENCES `salesperson` (`sno`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
