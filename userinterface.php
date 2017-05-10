#!/usr/bin/php
<?php
require_once("carLogin.php.inc");
require_once("carDB.php.inc");
function print_help()
{
  echo "usage: ".PHP_EOL;
  echo __FILE__." -u <userID> -p <password> -c <command arguments...>".PHP_EOL;
}
if ($argc < 2)
{
   print_help();
   exit(0);
}
$cArgs = array();
for ($i = 0; $i < $argc;$i++)
{
  if (($argv[$i] === "-h") ||
      ($argv[$i] === "--help"))
  {
      print_help();
      exit(0);
  }
  if ($argv[$i] === '-u')
  {
    $userID = $argv[$i + 1];
    $i++;
    continue;
  }
  if ($argv[$i] === '-p')
  {
    $password = $argv[$i + 1];
    $i++;
    continue;
  }
  if ($argv[$i] === '-c')
  {
    $command = $argv[$i + 1];
    $i++;
    continue;
  }
  $cArgs[] = $argv[$i];  
}
if (!isset($userID))
{
   echo "no userID specified".PHP_EOL;
   print_help();
   exit(0);
}
if (!isset($password))
{
   echo "no password specified".PHP_EOL;
   print_help();
   exit(0);
}
if (!isset($command))
{
   echo "no command specified".PHP_EOL;
   print_help();
   exit(0);
}
switch ($command)
{
  
  case 'addCar':
    $DBlogin = new DBlogin('carDB.ini');
    if (($DBlogin->validateUser($userID,$password)) === false)
       {
         echo "Login failed".PHP_EOL;
	 exit(0);
       }
    
    $carDatabase = new carDatabase("carDB.ini");
    $carDatabase->addCar($userID,$password,$cArgs[1],$cArgs[2],$cArgs[3],$cArgs[4],$cArgs[5],$cArgs[6],$cArgs[7],$cArgs[8],$cArgs[9],$cArgs[10],$cArgs[11],$cArgs[12]);
    break;

   case 'newFactory':
    $DBlogin = new DBlogin('carDB.ini');
    if (($DBlogin->validateUser($userID,$password)) === false)
       {
         echo "Login failed".PHP_EOL;
	 exit(0);
       }
    
    $carDatabase = new carDatabase("carDB.ini");
    $carDatabase->newFactory($userID,$password,$cArgs[1],$cArgs[2],$cArgs[3],$cArgs[4],$cArgs[5],$cArgs[6],$cArgs[7],$cArgs[8],$cArgs[9],$cArgs[10]);
    break;
	
   case 'updateCar':
    $DBlogin = new DBlogin('carDB.ini');
    if (($DBlogin->validateUser($userID,$password)) === false)
       {
         echo "Login failed".PHP_EOL;
	 exit(0);
       }
    
    $carDatabase = new carDatabase("carDB.ini");
    $carDatabase->updateCar($userID,$password,$cArgs[1],$cArgs[2],$cArgs[3],$cArgs[4]);
    break;
   
   case 'monthlyReport':
    $DBlogin = new DBlogin('carDB.ini');
    if (($DBlogin->validateUser($userID,$password)) === false)
       {
         echo "Login failed".PHP_EOL;
	 exit(0);
       }
    
    $carDatabase = new carDatabase("carDB.ini");
    $carDatabase->monthlyReport($userID,$password,$cArgs[1],$cArgs[2]);
    break;
	
   case 'searchOptions':
    $DBlogin = new DBlogin('carDB.ini');
    if (($DBlogin->validateUser($userID,$password)) === false)
       {
         echo "Login failed".PHP_EOL;
	 exit(0);
       }
    
    $carDatabase = new carDatabase("carDB.ini");
    $carDatabase->searchOptions($userID,$password,$cArgs[1],$cArgs[2]);
    break;
	
   case 'purchaseCar':
    $DBlogin = new DBlogin('carDB.ini');
    if (($DBlogin->validateUser($userID,$password)) === false)
       {
         echo "Login failed".PHP_EOL;
	 exit(0);
       }
    
    $carDatabase = new carDatabase("carDB.ini");
    $carDatabase->purchaseCar($userID,$password,$cArgs[1],$cArgs[2],$cArgs[3]);
    break;
   
}
?>
