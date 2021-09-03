/****************************************************************
//   
//   NAME:        Malia Liu
//
//   HOMEWORK:    Project 1
//
//   CLASS:       ICS 212
//
//   INSTRUCTOR:  Ravi Narayan
//
//   DATE:        March 19, 2021
//
//   FILE:        database.c
//
//   DESCRIOTION:
//     This file contains the function need to complete later.
//
****************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "record.h"
extern int debugmode;

/****************************************************************
//    
//    Funtion name:    addRecord
//
//    DESCRITION:      Thies function is to add record in the
//                     linked list in an ascending order.
//
//    Parameters:      start (struct record **) : pointer of
//                                                pointer of
//                                                first record
//                     accountno (int) : accountno that user
//                                       entered
//                     name (char []) : name that user entered
//                     address (char []) : address that user 
//                                         entered.
//
//    Return value:    0 : success
//                    -1 : fail
//
****************************************************************/

int addRecord (struct record ** start, int accountno, char name[], char address[])
{ 
    struct record * temp = NULL;
    struct record * temp2 = NULL;
    int done = -2;
    temp = *start;
    while ( done == -2 && temp != NULL )
    {
        if ( accountno > (*temp).accountno )
        {
            temp2 = temp;
            temp = (*temp2).next;
        }
        else if ( accountno < (*temp).accountno )
        {
            done = 0;
        }
        else
        {
            done = -1;
        }
    }  
    
    if ( done != -1 )
    {
        temp = (struct record *)malloc(sizeof(struct record));
        (*temp).accountno = accountno;
        strcpy((*temp).name, name);
        strcpy((*temp).address, address);
        (*temp).next = NULL;
        if ( *start == NULL )
        {
            *start = temp;
            done = 0;
        }
    }
   
    
    if ( done == -2 && temp != NULL )
    {   
        (*temp2).next = temp;
        done = 0;
    }
    else if ( done == 0 && accountno > (**start).accountno )
    {
        (*temp).next = (*temp2).next;
        (*temp2).next = temp;      
    }
    else if ( accountno < (**start).accountno) 
    {
        (*temp).next = *start;
        *start = temp;
    }
    
    if ((debugmode) == 0)
    {
        printf("\n>>>>>>>>>>>>>>>>>>>>>>>Function: addRecord\n");
        printf(">>>>>>>>>>>>>>>>>>>>>>>Parameters: struct record **, accountno, name, address\n");
        if ( temp != NULL)
        {
        printf(">>>>>>>>>>>>>>>>>>>>>>>accountno: %d\n", (*temp).accountno);
        printf(">>>>>>>>>>>>>>>>>>>>>>>name: %s\n", (*temp).name);
        printf(">>>>>>>>>>>>>>>>>>>>>>>address: %s\n", (*temp).address);
        }
        else 
        {
        printf(">>>>>>>>>>>>>>>>>>>>>>>ERROR occur when allocate the space for a record.\n");
        }
    }
   
    return done;
   
}

/****************************************************************
//    
//    Funtion name:    printAllRecord
//
//    DESCRITION:      This function is to print all the records
//                     in the linked list.
//
//    Parameters:      start (struct record *) : pointer of first 
//                                               record
//
****************************************************************/

void printAllRecords(struct record * start)
{
    struct record * temp = NULL;
    temp = start;
    while ( temp != NULL )
    {
        printf("\n%d\n", (*temp).accountno);
        printf("%s\n", (*temp).name);
        printf("%s\n", (*temp).address);
        temp = (*temp).next;
    }
    if ((debugmode) == 0)
    {
        printf("\n>>>>>>>>>>>>>>>>>>>>>>>Function: printAllRecords\n");
        printf(">>>>>>>>>>>>>>>>>>>>>>>Parameters: struct record *\n");
        printf(">>>>>>>>>>>>>>>>>>>>>>>No Parameters printed.\n");
    }
    if ( start == NULL )
    {
        printf("\nNo records in the database yet.\n");
    }
 
    return;
}

/****************************************************************
//    
//    Funtion name:    findRecord
//
//    DESCRITION:      This function finds the record with 
//                     the accountno that user entered, then
//                     print the record.
//
//    Parameters:      start (struct record *) : pointer of first
//                                               record
//                     accountno (int) : acccountno that user
//                                       entered
//
//    Return value:    0 : Success
//                    -1  : fail
//
****************************************************************/

int findRecord (struct record * start, int accountno)
{
    int done = -1;
    struct record * temp = NULL;
    temp = start;
    while ( temp != NULL && (*temp).accountno != accountno)
    {
        temp = (*temp).next;
    }
    if ( temp == NULL )
    {
        printf("No record found with this accountno.");
    }
    else 
    {   
        printf("\naccountno: %d\n",(*temp).accountno);
        printf("name: %s\n", (*temp).name);
        printf("address: %s\n", (*temp).address);
        done = 0;
    }
    if ((debugmode) == 0)
    {
        printf("\n>>>>>>>>>>>>>>>>>>>>>>>Function: findRecord\n");
        printf(">>>>>>>>>>>>>>>>>>>>>>>Parameters: struct record *, int\n");
        printf(">>>>>>>>>>>>>>>>>>>>>>>accountno: %d\n", accountno);
    }
  

    return done;
}

/****************************************************************
//    
//    Funtion name:    deleteRecord
//
//    DESCRITION:      This function delete the record with
//                     accountno that user entered.
//
//    Parameters:      start (struct record **) : pointer of 
//                                                pointer of 
//                                                first record
//                     accountno (int) : accountno that user
//                                       entered
//
//    Return value:    0 : success
//                    -1 : fail
//
****************************************************************/

int deleteRecord(struct record ** start, int accountno)
{
    int done = -1;
    struct record * temp = NULL;
    struct record * temp2 = NULL;
    temp = *start;
    while ( temp != NULL && (*temp).accountno != accountno)
    {
        temp2 = temp;
        temp = (*temp).next;
    }
    if ( temp == NULL )
    {
        printf("No record found.");
    }
    else if ( accountno == (**start).accountno )
    {
        temp = *start;
        *start = (**start).next;
        free(temp);
        printf("Record successfully deleted.\n");
        done = 0;
    }
    else 
    {  
        (*temp2).next = (*temp).next;    
        free(temp);
        printf("Record successfully deleted.\n");
        done = 0;
    }
    if ((debugmode) == 0)
    {
        printf("\n>>>>>>>>>>>>>>>>>>>>>>>Function: deleteRecord\n");
        printf(">>>>>>>>>>>>>>>>>>>>>>>Parameters: struct record **, int\n");
        printf(">>>>>>>>>>>>>>>>>>>>>>>accountno: %d\n", accountno); 
    }
 
    return done;
}
