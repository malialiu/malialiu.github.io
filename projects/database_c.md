---
layout: project
type: project
title: Develop Simple Database System in C
# All dates must be YYYY-MM-DD format!
date: 2021-09-02
labels:
  - C
  - Learning
summary: Database build in C with insert, delete, change, and search methods.
---
</div>
<img src="/images/database.png" data-canonical-src="/images/database.png" width="800" height="400" />
</div>

  This project is to build a database with add, print, find, and delete informations in a txt file. <br/>
In the user interface, user can enter any letter within the option to execute the method except <quit> method. For example <add>, enter 'a' will allow user to go in the add method. <br/>
"add" this will be asking for the account number, name, and address. Once more than one record in the database, the records will be stored in small to large order by the account number. <br/>
"printAll" this will print all the records in the database. <br/>
"delete" this will search the record with the account number user entered to delete it. <br/>
"quit" leave the database and all the records will be store in txt file. <br/>
  
  Concepts of C language involve in this project are allocate/deallocate memory, read/write file, and single-linked list. <br/>
 Allocate/deallocate memory by using the method malloc() to allocate the spaces for the datatype, and using free() method to release the spaces we allocated. <br/>
 ```
 {
  // pointer = (datatype)malloc(size) Example below:
  pointer = (int*)malloc(sizeof(int));
  // free(pointer) Example below:
  free(pointer);
 }
 ```
 
 <br/> read/write txt file  <br/>
 
 ```
 {
 FILE *fptr; // getting a pointer for a file
 fopen("data.txt","w"); // write the filename if in the same directory, and w states that file open to writing mode
 fopen("data.txt", "r") // write the filename if in the same directory, and w states that file open to reading mode
 fclose(fptr); // close file after make changes 
 }
 ```
  
Source files: https://github.com/malialiu/database.github.io.git
