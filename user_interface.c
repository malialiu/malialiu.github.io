/****************************************************************
//
//   NAME:          Malia Liu
//
//   HOMEWORK:      Project 1
//
//   CLASS:         ICS 212
//
//   INSTRUCTOR:    Ravi Narayan
//
//   DATE:          March 19, 2021
//
//   FILE:          user_interface.c
//
//   DESCRIPTION:
//    This will print the introduction and menu for users to 
//    enter their options.
//
//
****************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "record.h"
#include "database.h"
void printMenu();
struct record;
void printResult(struct record);
void getaddress(char [], int);
int readfile(struct record **, char []);
int writefile(struct record *, char []);
void cleanup(struct record **);
int debugmode = -1;

/****************************************************************
//
//   Function name: main
//
//   DESCRIPTION:   A userinterface function
//                  This function is to check the option of 
//                  user entered.
//
//   Parameters:    argc (int)
//                  argv[] (char*)
//
//   Return values: 0 : success
//   
****************************************************************/
 
int main(int argc, char* argv[])
{ 
    struct record * start = NULL;
    struct record person1;
    char userOption[30];
    int done  = -1;
    int inputLength;
    char clrBuffer[100];
    int index = 0;
    int i;//use in for loop when userOption is addRecord.
    int accountno = 0;
       
    if (argc > 1)
    {
        if (strcmp(argv[1], "debug") == 0 && argc <= 2)
        {
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>DEBUG MODE\n");
            debugmode = 0;
        }
        else
        {
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>ERROR\n");
            done = 0;
        }
    }
       
    readfile(&start, "project1.txt"); 
    printf("\nHello! Welcome to the database. This database is to save the record which include account number, name, and address. All changes will save in a text file named project1.txt\n");
    
    while(done == -1)
    {          
        printMenu();
        if ((debugmode) == 0)
        {
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>Function: printMenu\n");
            printf(">>>>>>>>>>>>>>>>>>>>>>>No Parameters.\n");
        } 
        
        printf("Please enter your option here: ");
        scanf("%s", userOption);
        inputLength = strlen(userOption);
        if ((debugmode) == 0)
        {
            printf("\n>>>>>>>>>>>>>>>>>>>>>userOption: %s\n", userOption);
            printf(">>>>>>>>>>>>>>>>>>>>>inputLength: %d\n", inputLength);
        }

        if ( strncmp(userOption, "add", inputLength) == 0)
        {
            printf("\nPlease enter the following informations.");
            printf("\nAccount number: ");
            scanf("%d", &person1.accountno);
             
                while ( person1.accountno <= 0 || findRecord(start, person1.accountno) == 0 ) 
                {
                    fgets(clrBuffer, 50, stdin);
                    printf("Account number must be positive number and not duplicate with other record!\n");
                    printf("Account number: ");
                    scanf("%d", &person1.accountno);
                }
     
            scanf("%c", clrBuffer);
           
            if ( debugmode == 0 )
            {
                printf("\n>>>>>>>>>>>>>>>>>>>>>accountno: %d\n", person1.accountno);
            }
 
            printf("\nName: ");
            fgets(person1.name, 25, stdin);
            inputLength = strlen(person1.name);
            person1.name[inputLength -1] = '\0';//remove the new line after name.
  
            printf("\nEnter / at the end when finish.");
            printf("\nAddress: ");
     
            getaddress(person1.address, index); 
            addRecord(&start, person1.accountno, person1.name, person1.address);
            printResult(person1);
            person1.accountno = 0;
            
            for ( i = 0; i <= 50; i++)
            {
                person1.address[i] =  '\0'; // clear the previous address.
            }
 
            if ((debugmode) == 0)
            {
                printf("\n>>>>>>>>>>>>>>>>>>>>>>>Function: printResult\n");
                printf(">>>>>>>>>>>>>>>>>>>>>>>Parameters: struct record\n");
            }
        }
        
        else if ( strncmp(userOption, "printall", inputLength) == 0 )
        {
            printAllRecords(start);
        }
        
        else if ( strncmp(userOption, "find", inputLength) == 0)
        {
            printf("\nPlease enter an accountno of a record you want to search for.");
            printf("\naccountno: ");
            scanf("%d", &accountno);
            findRecord(start,accountno);  
        }
        
        else if ( strncmp(userOption, "delete", inputLength) == 0)
        {
            printf("\nPlease enter an accountno of a record you want to delete.");
            printf("\naccountno: ");
            scanf("%d", &accountno);
            deleteRecord(&start, accountno);
        }
        
        else if ( strcmp(userOption, "quit")  == 0 )
        {
            writefile(start, "project1.txt");
            cleanup(&start);
            done = 0;
        }
        
        else
        {
            printf("\n ----Please enter a valid option!----\n");
        }
    }
    
    return 0;
}   

/****************************************************************
//
//  Function name: printMenu
//
//  DESCRIPTION:   A userinterface function
//                 This function is to print the valid options.
//
****************************************************************/

void printMenu()
{
    printf("\n<Please choose one of the following options by enter the name of the option.>\n");
    printf("\n<add>: Add a new record in the database.\n");
    printf("<printall>: Print all records in the database.\n");
    printf("<find>: Find record(s) with a specified account #\n");
    printf("<delete>: Delete existing record(s) from the database using the account # as a key\n");
    printf("<quit>: Quit the program\n");
    
    return;
}

/****************************************************************
//
//   Function name: getaddress
//
//   DESCRIPTION:   This function is to get the address which 
//                  enter by user.
//
//   Parameters:    index (int) : index for nwaddress array
//                  nwaddress (char []) : address that user entered
//   
****************************************************************/

void getaddress(char nwaddress[], int index)
{
    char userInput;
    
    while ( (userInput = getchar()) != '/')
    {
        nwaddress[index] = userInput;
        index++;
    }
    nwaddress[index] = '/';
    
    if ((debugmode) == 0)
    {
        printf("\n>>>>>>>>>>>>>>>>>>>>>>>Function: getaddress");
        printf("\n>>>>>>>>>>>>>>>>>>>>>>>Parameters: struct record, index\n");
        printf(">>>>>>>>>>>>>>>>>>>>>>>index: %d\n", index);
    }
         
 
    return;
}

/****************************************************************
//
//   Function name: printResult
//
//   DESCRIPTION:   This function is to print what user entered.
//   
//   Parameters:    person1 (struct record): structure with 
//                                           information needed
//                                           for a record.
//
****************************************************************/

void printResult(struct record person1)
{
    
    printf("\nHere are the informations you entered.\n");
    printf("Accountno: %d", person1.accountno);
    printf("\nName: %s", person1.name);
    printf("\nAddress: %s\n", person1.address);

    return;
}

/****************************************************************
//
//   Function name: readfile
//
//   DESCRIPTION:   A readfile function
//                  This function is to read the records in the 
//                  file and put it in linked list.
//
//   Parameters:    start (struct record **) : pointer of the 
//                                             first record
//                  filename (char []) : name of text file
//
//   Return values: 0 : success
//                 -1 : fail
//   
****************************************************************/

int readfile(struct record ** start, char filename[])
{
    FILE * fp = NULL;
    int done = -1;
    struct record * temp = NULL;
    int index = 0;
    char address;
    int accountno = 0;
    int inputLength;
    char clrBuffer;
    
    if ((debugmode) == 0)
    {
        printf("\n>>>>>>>>>>>>>>>>>>>>>>>Function: readfile");
        printf("\n>>>>>>>>>>>>>>>>>>>>>>>Parameters: struct record ** start, char filename[]\n");
        printf(">>>>>>>>>>>>>>>>>>>>>>>filename: %s\n", filename);
    }    

    fp = fopen(filename, "r");
    if ( fp != NULL )
    {
        fscanf(fp, "%d", &accountno);//check file is empty or not.
    }    

    if ( accountno > 0 )
    {   
        if ( accountno > 0 )
        {
            temp = (struct record *)malloc(sizeof(struct record));
            *start = temp;
        }
        while ( done < 0 )
        {
            (*temp).accountno = accountno;//get accountno in the text file.
            clrBuffer = fgetc(fp);      
            fgets((*temp).name,25,fp); //get name in the text file.
            inputLength = strlen((*temp).name);
            (*temp).name[inputLength -1] = '\0';
            
            
            while ( (address = fgetc(fp)) != '/' )//get address in the text file.
            {
                (*temp).address[index] = address;
                index++;
            }
            (*temp).address[index] = '/';
            (*temp).next = NULL;
           
            fscanf(fp, "%d", &accountno);
            if ( accountno == (*temp).accountno )
            {
               done = 0;
            }
            else
            {
                (*temp).next = (struct record *)malloc(sizeof(struct record));
                temp  = (*temp).next;
                index = 0;
            }
            
        }
   
    }
    else 
    {
        done = -1;
    }
    return done;
}

/****************************************************************
//
//   Function name: writefile
//
//   DESCRIPTION:   A writefile function
//                  This function is to write the records in 
//                  the linked list in text file.
//
//   Parameters:    start (struct record *) : pointer of the 
//                                            first record
//                  filename (char []) : name of text file
//
//   Return values: 0 : success
//                 -1 : fail
//   
****************************************************************/

int writefile(struct record * start, char filename[])
{
    int done = -1;
    FILE * fp;
    struct record * temp = NULL;
    fp = fopen(filename, "w");
    temp = start;
    while ( temp != NULL )
    {
        fprintf(fp, "%d\n", (*temp).accountno);
        fprintf(fp, "%s\n", (*temp).name);
        fprintf(fp, "%s\n", (*temp).address);
        temp = (*temp).next; 
        if ( temp == NULL ) 
        {
            done = 0;
        }
    }
    
    
    return done;
}

/****************************************************************
//
//   Function name: cleanup
//
//   DESCRIPTION:   This function is to releases all allocate 
//                  space in heap memory and assign NULL to 
//                  start.
//   
//   Parameters:    start (struct record **) : pointer of the 
//                                             first record
//
****************************************************************/

void cleanup(struct record ** start)
{
    struct record * temp = NULL;
    
    while ( *start != NULL )
    {
        temp = *start;
        *start = (**start).next;
        free(temp);
    }
    *start = NULL;
}
