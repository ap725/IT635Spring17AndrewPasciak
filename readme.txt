README

To start:

backup.sql will create the database and mysql account that accesses it.

use file 'userinterface.php'
 
the format for commands is:

userinterface.php -u <user id> -p <password> -c <command arguements...>


Available Commands:


1. 'addCar'
  
    php userinterface.php -u <user id> -p <password> -c addCar <year> <make> <model> <type> <color> <description> <location> <purchaseprice> <purchasedate> <sellingprice> <rating> <review>
    
    EXAMPlE: php userinterface.php -u admin1 -p password -c addCar 2111 Mercedes E400 Wagon Silver Leather Lot 62000 2017-05-16 65000 7 'great mileage'
	Date format: YYYY-MM-DD


2. 'newFactory'
  
    php userinterface.php -u <user id> -p <password> -c addCar <year> <make> <model> <type> <color> <description> <location> <purchaseprice> <rating> <review>
    
    EXAMPlE: php userinterface.php -u admin1 -p password -c newFactory 2017 Mercedes S550 Sedan Green Leather Factory 96000 8 'great family car, great traction'
	
    
3. 'updateCar'

    php userinterface.php -u <user id> -p <password> -c updateCar <tablename> <data> <tablename> <data>

	EXAMPlE:Just sold car--   php userinterface.php -u admin1 -p password -c updateCar sellingdate 2017-03-05 id 8



4. 'monthlyReport'

   php userinterface.php -u <user id> -p <password> -c monthlyReport <year> <Month> 

	EXAMPLE: php userinterface.php -u admin1 -p password -c monthlyReport 2017 01
	Date format: YYYY-MM-DD



5. 'purchaseCar'

   php userinterface.php -u <user id> -p <password> -c purchaseCar <id> <sellingprice> <purchasedate>

	EXAMPLE:  php userinterface.php -u admin1 -p password -c purchaseCar 24 62000 2017-03-22

6. 'searchOptions'

   php userinterface.php -u <user id> -p <password> -c searchOptions <Row Name> <option>

	EXAMPLE: php userinterface.php -u admin1 -p password -c searchOptions color blue 


7. 'mongo search by rating'

   php mongoratings.php 

8. 'mongo search by review'
   php mongoreviews.php

	
















    
