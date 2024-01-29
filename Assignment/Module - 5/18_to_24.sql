-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jan 29, 2024 at 06:14 AM
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
-- Database: `18_to_24`
--

-- --------------------------------------------------------

--
-- Table structure for table `item_mast`
--

CREATE TABLE `item_mast` (
  `pro_id` int(11) DEFAULT NULL,
  `pro_name` varchar(50) DEFAULT NULL,
  `pro_price` double DEFAULT NULL,
  `pro_com` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `item_mast`
--

INSERT INTO `item_mast` (`pro_id`, `pro_name`, `pro_price`, `pro_com`) VALUES
(101, 'Mother Board', 3200, 15),
(102, 'Key Board', 450, 16),
(103, 'ZIP drive', 250, 14),
(104, 'Speaker', 550, 16),
(105, 'Monitor', 5000, 11),
(106, 'DVD drive', 900, 12),
(107, 'CD drive', 800, 12),
(108, 'Printer', 2600, 13),
(109, 'Refill cartridge', 350, 13),
(110, 'Mouse', 250, 12);

-- --------------------------------------------------------

--
-- Table structure for table `orders`
--

CREATE TABLE `orders` (
  `ord_no` int(11) DEFAULT NULL,
  `purch_amt` double DEFAULT NULL,
  `ord_date` varchar(20) DEFAULT NULL,
  `customer_id` int(11) DEFAULT NULL,
  `salesman_id` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `orders`
--

INSERT INTO `orders` (`ord_no`, `purch_amt`, `ord_date`, `customer_id`, `salesman_id`) VALUES
(70001, 150.5, '1997', 3005, 5002),
(70009, 270.65, '1993', 3001, 5005),
(70002, 65.26, '1997', 3002, 5001),
(70004, 110.5, '1987', 3009, 5003),
(70007, 948.5, '1993', 3005, 5002),
(70005, 2400.6, '1978', 3007, 5001),
(70008, 5760, '1993', 3002, 5001),
(70010, 1983.43, '1992', 3004, 5006),
(70003, 2480.4, '1992', 3009, 5003),
(70012, 250.45, '1979', 3008, 5002),
(70011, 75.29, '1987', 3003, 5007),
(70013, 3045.6, '1983', 3002, 5001);

-- --------------------------------------------------------

--
-- Table structure for table `salespeople`
--

CREATE TABLE `salespeople` (
  `salesman_id` int(11) NOT NULL,
  `name` varchar(20) DEFAULT NULL,
  `city` varchar(20) DEFAULT NULL,
  `commission` double DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `salespeople`
--

INSERT INTO `salespeople` (`salesman_id`, `name`, `city`, `commission`) VALUES
(5001, 'James Hoog', 'New York', 0.15),
(5002, 'Nail Knite', 'Paris', 0.13),
(5003, 'Lauson Hen', 'San Jose', 0.12),
(5005, 'Pit Alex', 'London', 0.11),
(5006, 'Mc Lyon', 'Paris', 0.14),
(5007, 'Paul Adam', 'Rome', 0.13);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `orders`
--
ALTER TABLE `orders`
  ADD KEY `salesman_id` (`salesman_id`);

--
-- Indexes for table `salespeople`
--
ALTER TABLE `salespeople`
  ADD PRIMARY KEY (`salesman_id`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `orders`
--
ALTER TABLE `orders`
  ADD CONSTRAINT `orders_ibfk_1` FOREIGN KEY (`salesman_id`) REFERENCES `salespeople` (`salesman_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
