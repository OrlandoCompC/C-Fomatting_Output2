/*
MADE BY: ORLANDO COMPANIONI
EMAIL: companor@sheridancollege.ca
Date: 2023/08/29

Here i have all the prototypes for the functions in the classList.c 
THIS IS THE PART 1 HEADER THATS CHANGED FOR THE SECOND ASSIGNMENT, IT HAS
AN EXTRA FUNCTION CALLED  subjectMarksReport
*/
#pragma once
//prototypes
void printReport(const char subjectCode[], const int studentNumbers[],
const int marks[], int noOfStudents);
void printLine();
void newPrintLine(void);
void completeArray(int *studentNumber, int *mark, int noOfStudents);
void subjectMarksReport(void);