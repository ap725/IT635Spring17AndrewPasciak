<?php
class carDatabase
{
   private $db;
   private $ini;
 	
   public function __construct($inifile)
   {
	
	$this->ini = parse_ini_file($inifile,true);
	$host = $this->ini['carDB']['host'];
	$user = $this->ini['carDB']['user'];
	$password = $this->ini['carDB']['password'];
	$database = $this->ini['carDB']['database'];
	$this->db = new mysqli($host,$user,$password,$database);
	
	if ($this->db->connect_errno > 0)
	{
		echo __FILE__.":".__LINE__.": failed to connect to db, re: ".$this->db->connect_error.PHP_EOL;
		exit(0);
	}
   }
   public function __destruct()
   {
	$this->db->close();
   }
   
  public function addCar($userID,$passwd,$year,$make,$model,$type1,$color,$description,$location,$purchaseprice,$purchasedate,$sellingprice,$sellingdate)
  {
      
      $year = $this->db->real_escape_string($year);
      $make = $this->db->real_escape_string($make);
      $model = $this->db->real_escape_string($model);
      $type1 = $this->db->real_escape_string($type1);
      $color = $this->db->real_escape_string($color);
      $description = $this->db->real_escape_string($description);
      $location = $this->db->real_escape_string($location);
      $purchaseprice = $this->db->real_escape_string($purchaseprice);
      $purchasedate = $this->db->real_escape_string($purchasedate);
	  $sellingprice = $this->db->real_escape_string($sellingprice);
	  $sellingdate = $this->db->real_escape_string($sellingdate);
	  
      
      $query = "insert into dealership (year, make, model, type, color, description, location, purchaseprice, purchasedate,sellingprice,sellingdate) VALUES ('$year','$make','$model','$type1','$color','$description','$location','$purchaseprice','$purchasedate','$sellingprice','$sellingdate');";
      $results = $this->db->query($query);
    	if ($this->db->errno > 0)
	{
	    echo __FILE__.":".__LINE__."DB error: ".$this->db->error.PHP_EOL;
	}
	echo "Car added".PHP_EOL;
  }
  
 public function updateCar($userID,$passwd,$data1,$data2,$data3,$data4)
  {
      
      $data1 = $this->db->real_escape_string($data1);
      $data2 = $this->db->real_escape_string($data2);
      $data3 = $this->db->real_escape_string($data3);
      $data4 = $this->db->real_escape_string($data4);
	  
      
      $query = "UPDATE dealership SET $data1 = '$data2' WHERE $data3 = '$data4';";
      $results = $this->db->query($query);
    	if ($this->db->errno > 0)
	{
	    echo __FILE__.":".__LINE__."DB error: ".$this->db->error.PHP_EOL;
	}
	echo "Car updated".PHP_EOL;
  }
  
  public function monthlyReport($userID,$passwd,$year,$month)
  {
      
      
	  $year = $this->db->real_escape_string($year);
	  $month = $this->db->real_escape_string($month);
      
      $query = "SELECT * FROM dealership WHERE YEAR(purchasedate) = '$year' AND MONTH(purchasedate) = '$month';";
      $results = $this->db->query($query);
    	if ($this->db->errno > 0)
	{
	    echo __FILE__.":".__LINE__."DB error: ".$this->db->error.PHP_EOL;
	}
     	while ($row = $results->fetch_assoc())
	{ 
	    echo $row['year']." ".$row['make']." ".$row['model']." ".$row['type']." ".$row['color']." ".$row['description']." ".$row['location']." ".$row['purchaseprice']." ".$row['purchasedate']." ".$row['sellingprice']." ".$row['sellingdate'].PHP_EOL;
	}
  }
  
  public function searchOptions($userID,$passwd,$option1,$option2)
  {
      
      $option1 = $this->db->real_escape_string($option1);
      $option2 = $this->db->real_escape_string($option2);
      
      $query = "SELECT * FROM dealership WHERE $option1 = '$option2';";
      $results = $this->db->query($query);
    	if ($this->db->errno > 0)
	{
	    echo __FILE__.":".__LINE__."DB error: ".$this->db->error.PHP_EOL;
	}
     	while ($row = $results->fetch_assoc())
	{ 
	    echo $row['year']." ".$row['make']." ".$row['model']." ".$row['type']." ".$row['color']." ".$row['description']." ".$row['location']." ".$row['purchaseprice']." ".$row['purchasedate']." ".$row['sellingprice']." ".$row['sellingdate'].PHP_EOL;	
	}
  }
  
 public function purchaseCar($userID,$passwd,$idnumber,$sellprice)
  {
      
      $idnumber = $this->db->real_escape_string($idnumber);
	  $sellprice = $this->db->real_escape_string($sellprice);
     
      $query = "UPDATE dealership SET location = 'In Transit', sellingprice = '$sellprice' WHERE id = '$idnumber';";
      $results = $this->db->query($query);
    	if ($this->db->errno > 0)
	{
	    echo __FILE__.":".__LINE__."DB error: ".$this->db->error.PHP_EOL;
	}
	echo "Car purchased, selling price has been set, and car set to In Transit".PHP_EOL;
  }
  
}
?>
