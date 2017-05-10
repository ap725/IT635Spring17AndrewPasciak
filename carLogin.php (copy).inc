<?php
class DBlogin
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
     public function checkIfUserExists($userID)
   {
	$userID = $this->db->real_escape_string($userID);
	$query = "select userid from user where userid = '$userID';";
        $results = $this->db->query($query);
	$row = $results->fetch_assoc();
	if ($row['userID'] === $userID)
        {				
		return true;
	}       
	return false;
   }
   public function validateUser ($userID, $passwd)
   {
	$userID = $this->db->real_escape_string($userID);
	$passwd = $this->db->real_escape_string($passwd);	
	$query = "select userid,passwd from user where userid = '$userID';";
        $results = $this->db->query($query);
	$row = $results->fetch_assoc();
	if ($row['passwd'] === $passwd)
        {		
		return true;
	}
        return false;
   }
   
   
}
?>
