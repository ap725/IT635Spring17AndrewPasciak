<?php
	try
{
	$mdb = new MongoDB\Driver\Manager("mongodb://andrew:andrew@ds125481.mlab.com:25481/it635");	
	$command = new MongoDB\Driver\Command(['ping' => 1]);
	$mdb->executeCommand('db', $command);
	$servers = $mdb->getServers();
	print_r($servers);
	$filter = array('rating'=>10);
	$query = new MongoDB\Driver\Query($filter);
	$results = $mdb->executeQuery("it635.Car",$query);
	print_r($results->toArray());
}
catch(exception $e)
{
	print_r($e);
}
?>
