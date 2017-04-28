-- MySQL dump 10.13  Distrib 5.7.17, for Linux (x86_64)
--
-- Host: localhost    Database: Car_dealership
-- ------------------------------------------------------
-- Server version	5.7.17-0ubuntu0.16.04.1

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `dealership`
--

DROP TABLE IF EXISTS `dealership`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `dealership` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `year` int(11) DEFAULT NULL,
  `make` varchar(75) DEFAULT NULL,
  `model` varchar(75) DEFAULT NULL,
  `type` varchar(75) DEFAULT NULL,
  `color` varchar(75) DEFAULT NULL,
  `description` varchar(512) DEFAULT NULL,
  `location` varchar(155) DEFAULT NULL,
  `purchaseprice` int(11) DEFAULT NULL,
  `purchasedate` date DEFAULT NULL,
  `sellingprice` int(11) DEFAULT NULL,
  `sellingdate` date DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=21 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `dealership`
--

LOCK TABLES `dealership` WRITE;
/*!40000 ALTER TABLE `dealership` DISABLE KEYS */;
INSERT INTO `dealership` VALUES (10,2017,'Mercedes','E400','Wagon','Silver','Leather','Lot',62000,'2017-05-16',65000,'2017-05-20'),(11,2017,'Mercedes','E400','Wagon','Blue','Leather,Sunroof','Lot',62000,'2017-02-11',65000,NULL),(12,2017,'Mercedes','E300','sedan','Silver','Leather,Sunroof','Factory',52000,'2017-02-11',58000,NULL),(13,2017,'Mercedes','S550','Sedan','Green','Leather','Factory',96000,NULL,NULL,NULL),(14,2017,'Mercedes','S550','Sedan','White','Leather,Moonroof','Factory',96000,NULL,NULL,NULL),(15,2017,'Mercedes','S550','Sedan','Blue','Leather','Lot',39000,'2017-01-12',49000,NULL),(16,2017,'Mercedes','c300','Sedan','Green','Leather','Lot',39000,'2017-02-23',49000,'2017-05-05'),(17,2017,'Mercedes','c300','Sedan','Purple','Leather','Lot',39000,'2017-08-11',49000,NULL),(18,2017,'Mercedes','S550','Sedan','Green','Leather,Moonroof','Factory',96000,NULL,NULL,NULL),(19,2017,'Mercedes','c300','Sedan','Silver','Leather','Lot',39000,'2017-05-17',49000,NULL),(20,2017,'Mercedes','S550','Sedan','Black','Leather,Moonroof','Factory',96000,NULL,NULL,NULL);
/*!40000 ALTER TABLE `dealership` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `user`
--

DROP TABLE IF EXISTS `user`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `user` (
  `userid` varchar(55) DEFAULT NULL,
  `passwd` varchar(55) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `user`
--

LOCK TABLES `user` WRITE;
/*!40000 ALTER TABLE `user` DISABLE KEYS */;
INSERT INTO `user` VALUES ('admin','password');
/*!40000 ALTER TABLE `user` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2017-03-22 15:34:47
