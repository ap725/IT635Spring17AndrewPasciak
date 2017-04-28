#!/usr/bin/php
<?php
$db = new mysqli("localhost","root","Trustno11981","Classes");

if ($db->connect_errno != 0)
{
	echo "error connecting to database: ".$db->connect_error.PHP_EOL;
	exit();
}

echo "Successfully connected!".PHP_EOL;

$query = "select * from class;";

$db->query($query);

$db->close();

echo "program complete".PHP_EOL;
?>
