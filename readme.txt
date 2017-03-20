README

To start:

user.sql will create the database and mysql account that accesses it.

Workoutsdump.sql will create the tables and data.

use file 'userinterface.php'
 
the format for commands is:

userinterface.php -u <user id> -p <password> -c <command arguements...>


Available Commands:


1. 'addCar'
  
    userinterface.php -u <user id> -p <password> -c addCar <year, make, model, type, color, description, location, purchaseprice, purchasedate,sellingprice,sellingdate>
    
    Date format: YYYY-MM-DD
    
2. 'updateCar'

    userinterface.php -u <user id> -p <password> -c updateCar <tablename> <data> <tablename> <data>

3. 'monthlyReport'

   userinterface.php -u <user id> -p <password> -c monthlyReport <year> <Month> 

4. 'purchaseCar'

   userinterface.php -u <user id> -p <password> -c purchaseCar <id> <sellingprice>

5. 'searchOptions'

   userinterface.php -u <user id> -p <password> -c searchOptions <Row Name> <option>
     