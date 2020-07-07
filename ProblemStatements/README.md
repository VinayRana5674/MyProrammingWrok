<h1>SECTION A:- Steps to run code. </h1>

It is setup in Azure Databricks, Created a custom databricks runtime
image too but that would eventually take lot of setup you to run. So the
best way to run the code is within my databricks account.

I am attaching my DATABRICKS username and password and SNOWFALKE
DATABASE user name and password:-

Databricks Notebook Link :-
https://adb-1277017978199729.9.azuredatabricks.net/?o=1277017978199729#notebook/1718613760409762/command/1718613760409771<br/>
<br/>
Email :- vinay.11605674@lpu.in <br/>Password :- 18910352@\#aA<br/>

If you want to check How code works in case of updates, Please use below
link to upload NEW CSV file you have and then rename the file name in
"def main():" for "filepath" variable. It should look something like
this.

OLD:- filepath = "/FileStore/tables/products.csv" <br/>
NEW:- filepath = "/FileStore/tables/{NEW\_FILE\_NAME\_HERE}.csv"

URL TO UPLOAD NEW FILE :-
https://adb-1277017978199729.9.azuredatabricks.net/?o=1277017978199729#tables/new


Dabase URL :-
https://om02513.east-us-2.azure.snowflakecomputing.com/console#/internal/worksheet
<br/>
Database Used:- SnowFlake <br/>user:- vrana <br/>password :- 18910352aA<br/>

Cloud Service Used:- Azure Databricks, Azure Key Vault</br>
Framework:- Spark

Once login in successfull please open the notebook with given url and just click on run all. My main method is at the end of code, their you can see the LOGS of code execution.


<h1>SECTION B :-) Details of all the tables and their schema, [with commands to recreate them] </h1>


1:- PRODUCTS TABLE ( CONSIST OF PRODUCT DETAILS) <br/>
2:- AGGREGATE_PRODUCT_TABLE ( CONSIST of rows with "name" and "no. of products" as the columns.)<br/>

PRODUCTS :-   

CREATE TABLE PRODUCTS <br/>
(<br/>
NAME VARCHAR(50),<br/> 
SKU VARCHAR(50), <br/>
DESCRIPTION VARCHAR(300)<br/>
);<br/>


AGGREGATE\_PRODUCT\_TABLE :- 

CREATE TABLE AGGREGATE_PRODUCT_TABLE <br/>
(<br/>
NAME VARCHAR(50), <br/>
NO_OF_PRODUCTS NUMBER(38,0) <br/>
);<br/>


<h1>SECTION C:- What is done from “Points to achieve” and number of entriesin all your tables with sample 10 rows from each</h1><br/>

OOPS Conecppt Implementation :- COMPLETED <br/>
Non-blocking parallel ingestion of data :- COMPLETED ( Total time taken to run whole process 1.35 to 1.40 Mintues) <br/>
Support for updating existing products :- COMPLETED<br/>
Product Data Ingestion in same Table :- COMPLETED<br/>
Aggregated table on above rows with `name` and `no. of products` :- COMPLETED<br/>

DESCRIPTION OF TASKS DONE TO ACHIEVE REQUIREMENTS.<br/>

<h3>PART A:- Support for updating existing products</h3>

1:- PRODUCTS table. :- This table contains The Product details.<br/>

As mentioned in the question 'sku' is the primary key, but 'sku' contains duplicate values. So I had to find out the composite primary key which can uniquely identify a row in database. So as i went through the data, i found that SKU + DESCRIPTION can be used as a composite primary key.<br/>

COMPOSITE PRIMARY KEY :- SKU + DESCRIPTION<br/>

So everytime we are dumping new CSV file, our database would get the record based on these 3 condition.<br/>

     1:-) UPDATE:- If there is a  record in our Input csv file, which contains the composite primary key 
     "SKU and DESCRIPTION"  that is already present in our databse, We will simply update the old Record in
     our database with the new one.
     
     2:-) INSERT:- If there is a  record in our Input CSV file for which we don't have "SKU and DESCRIPTION" 
     present in our databse, that means it is a new entry, we will simply insert them in our database.
     
     3:-) KEEP OLD if no UPDATED entry for them:- If there is no record in our Input CSV file, which matches 
     the composite primary key  "SKU and DESCRIPTION"   in our database, that means it haven't got any update,
     we keep that record as it is.
     
     WORKAROUND FOR THE PROBLEM :- 
     
            Created two dataframe,  df1 :- spark dataframe with new record of input csv file, df2 :- spark dataframe
            existing data of database
     
        1:- Applied left join between df1 and df2 :- Join condition "df1.NAME = df2.NAME and df1.DESCRIPTION = df2.DESCRIPTION",
            so as a result our output dataframe will have a:-) Eveything from df1 (left dataframe) regradless of join condition  
            which will have "UPDATED VALUES" PLUS "NEWELY INSERTED RECORD" let's assume this is our df3. BUT it won't have the data
            which exist only in df2 (right dataframe, the one we picked from database), these are the old records.
        
        2:-  No we just have to identify these old records and create a final dataframe which will have the data of 
             "NEW RECORD" + "UPDATED RECORD" + "OLD RECORD FOR WHICH THERE IS NO ENTRY IN NEW DATAFRAME BY COMPOSITE PRIMARY 
             KEY" for finding these old records i have added a temporary STATUS columnn in my both dataframe, which were refering
             to status 'OLD'  or 'NEW' , then applied the inner join df3 with df2 and filter out the record after grouping them by 
             using "SKU ,DESCRIPTION", count(STATUS) and having COUNT(STATUS) exactly as 1 and 'STATUS' = OLD, that means this was
             the record only exist in our databse for that composite Primary Key.
            
             Now we have final dataframe consist of Clean record having single entry for this composite primary key SKU and DESCRIPTION.

<h3>PART B:- Non-blocking parallel ingestion of data.</h3>


1:- For Non-Blocking parallel ingestion and processing of the data i have levraged the Spark Framework.

    How i achieved this.

    1:- We had a input file of half of million rows, Reading and processing that input file as a 
        single unit would be very unefficient.
    2:- I have  python script to do the parition of the data and making the parallel database connection.
    3:- def calc_num_partition():- This function is used to determine the number of relevant partition for 
        the dataframe, because making too many partition of small dataset and too less parition of large datasets
        doesn't use memory efficiently. This function was returning the relvant number of parition based on the
        a:-) CPU Cores
        b:-) Worker Node
        c:-) Memory Expanantion
        d:-) And dataset size.
        
    Now for example our dataset has 500000 rows, based on my cluster capacity, worker node, cpu core and dataset size
    my function would return near around 32 partiton consist of 15625 rows per parition, now when i would be doing any
    transformation on my data, it would be happening in these small dataset in parallel.

    4:-) def calc_parallel_con():- In previous step we had 15625 rows in each partition having the total of 32 partition,
    but what is point of having these many partition in place if we are not dumping these partition in parallel, in to our
    database. So this function was returning the number of suitable parallel database connection that should be made while
    copying the data.

    In this way i was able to do simple dump of the input file into database in 18 to 20 Seconds consist of 500000 rows.
    And Dumping after applying our join our logic for handle updates and all, total time to calculate the output dataframe
    and dump that was 36 to 38 seonds.


<h3>PART C:- code should follow concept of OOPS</h3><br/>

Code is following the OOPS programming conecept. <br/>

1:- We have Classes for each specfic type of operation, have public, private, and protected specifier based on the criticality of class content it is holding.<br/>

2:-Code is meant to be dynamic. We have Class which can be used with any set of operation. For example we have class DBConnection(), inside this class we can have any database connector method, they all will follow the same structure, I am using snowflake as a databse, now for example i want to change my database to SQL Server, I just have to add new method in my this class with minimal number of changes. Same goes for ReadSource() class,DataTransformation class. Code is dynamic not just being used by PRODUCT table but with any another table, as long as we have the functionality that matches or we have the entry in our dictionary.<br/>

<h3>PART D:- All product details are to be ingested into a single table.</h3>

Yes, All product details are ingested into a single table, This table will just be updated based on our UPDATE data logic.<br/>

<h3>PART E: aggregated table on above rows with `name` and `no. of products`s.</h3></br>

Yes we have table named as AGGREGATE\_PRODUCT\_TABLE in our database.<br/>

<h3>PART F: Count of Rows in each table </h3>

Count of Rows in each table. 1:- Dumped the input file twice without truncating the table. (Basically our dataframe contains evrything since it is cluster execution, i am bringing my data into spark cluster for processing, applying join on dataframe of database and dataframe of csv file,resultant dataset is written, so our final dataframe consist only what is expected).<br/>

2:- After dumping the Input file twice. I have got the below rows count.

    TABLE                                   COUNT
    PRODUCTS                                5,00,000
    AGGREGATE_PRODUCT_TABLE                 222,024

    <h4>This is because there is no changes in our input file for both time data dump, so nothing changes, There would still be the old record</h4>

    PRODUCTS TABLE SAMPLE DATA.
    +---------------+-------------------+--------------------+
    |           NAME|                SKU|         DESCRIPTION|
    +---------------+-------------------+--------------------+
    |   Carmen Moore|    a-feel-democrat|Picture environme...|
    | Allison Martin|    ability-account|Serious type deve...|
    |   Susan Turner|  a-could-true-rich|Arm its too usual...|
    |     Wayne Lutz|  a-clearly-air-job|Environment trade...|
    |Ricardo Salinas|     a-behind-white|Itself sign firm ...|
    |  Jeff Shepherd|a-assume-town-clear|Report right this...|
    |    Scott Jones| a-both-state-voice|Remember director...|
    |    James Dixon|     a-include-face|Understand develo...|
    |   Jaime Barron|     a-control-huge|School internatio...|
    | Timothy Potter|   a-interview-then|Official matter n...|
    +---------------+-------------------+--------------------+

    AGGREGATE_PRODUCT_TABLE SAMPLE DATA.
    +-----------------+--------------+
    |             NAME|NO_OF_PRODUCTS|
    +-----------------+--------------+
    |     Shelby Davis|             4|
    |      Amy Mcgrath|             2|
    |     Brenda Young|             6|
    |    Troy Crawford|             2|
    | Kimberly Sanchez|            16|
    |    Tina Morrison|             4|
    |     Robert Young|            23|
    |Samantha Schaefer|             1|
    |        Erin Sims|             1|
    |    Steven Keller|             3|
    +-----------------+--------------+

    INFO :: Started Main Function Execution.
    INFO :: Database Used is SNOWFLAKE.
    INFO :: Retrieving The Database Secrets from Azure Key Vault.
    INFO :: Suceesfully retrieved the secrets from Azure Key-Vault.
    INFO :: Established SnowFlake Database Connection Succesfully.
    INFO :: Processing for PRODUCT TABLE.
    INFO :: Reading the CSV file from /FileStore/tables/products.csv.
    INFO :: Calculating Number of Relveant Partition for Dataframe.
    INFO :: Done Reading the CSV File from /FileStore/tables/products.csv
    INFO :: Calculating Number of Relveant Parallel Database Connection for Dataframe.
    INFO :: Starting Data Dump for Table PRODUCTS at 2020-06-29 13:39:40.179190.
    INFO :: Succesfully dumped the data for table PRODUCTS into database. 2020-06-29 13:40:06.146238.
    INFO :: TOTAL TIME TAKEN TO DUMP THE DATA  IN SECONDS :=> -25.967084272997454 SECONDS.
    INFO :: Completed Data Dump for TRANSFORMATION 1.
    INFO :: Calling Transformation 2.
    INFO :: TRANSFORMATION 2 Creating the Aggregate Product table Consist of `name` and `no. of products`.
    INFO :: Succesfully completed TRANSFORMATION 2
    INFO :: Calculating Number of Relveant Parallel Database Connection for Dataframe.
    INFO :: Starting Data Dump for Table aggregate_product_table at 2020-06-29 13:40:06.167516.
    INFO :: Succesfully dumped the data for table aggregate_product_table into database. 2020-06-29 13:40:44.655921.
    INFO :: TOTAL TIME TAKEN TO DUMP THE DATA  IN SECONDS :=> -38.488416156033054 SECONDS.
    INFO :: TRANSFORMATION 2 Completed, Done building aggregate_product_table In Database.
    INFO :: Completed All Function Execution.
    Command took 1.30 minutes -- by vinay.11605674@lpu.in at 6/29/2020, 1:39:26 PM on POSTMAN_ENG


<h1>SECTION E: What would you improve if given more days </h1>

1:- I would chamge the way the code is writing into database, Dumping the spark dataframe od given csv file with these 500000 records without any transformation is taking 18 to 20 second to dump, But we can make it more faster by using internal stage area of snowflake, It would hardly take 5 to 7 second without transformation.<br/>

2:- We can Still Improve parallel Procesing by setting the degree of parallelism on the basis of other factors.<br/>

