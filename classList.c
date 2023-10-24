/*
MADE BY: ORLANDO COMPANIONI
EMAIL: companor@sheridancollege.ca
Date: 2023/08/29

I am making a class list report which will print with all of the information in a table format.
THIS IS THE COPY I MADE FOR PART 2 OF THE ASSIGNMENT WHICH YOU SAID WE NEEDED TO MAKE.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "classList.h"
#include "utils.h"


// int main(){
//     char subjectCode[10];
//     int stdnum[50];
//     int mark[50];
//     int noOfStudents=0;
//     printf("Enter Subject Name: ");
//     scanf("%s",subjectCode);
//     printf("Enter The Number of Students[max 50]: ");
//     scanf("%d",&noOfStudents);
    
//     //GETTING THE STUDENT NUMBERS AND MARKS
//     completeArray(stdnum,mark,noOfStudents);

//     //PRINTING THE REPORT
//     printReport(subjectCode,stdnum,mark,noOfStudents);
//     return 0;
// }//end of main

//a function with a pointer to the array to update the values without having to return
void completeArray(int *studentNumber, int *mark, int noOfStudents){
    for (int i=0;i<noOfStudents;i++){
        printf("%d:\n",i+1);
        printf("Student Number: ");

        scanf("%d",&studentNumber[i]);
        printf("Mark: ");

        scanf("%d",&mark[i]);
    }
}//end of completeArray


//prints the report in a table format
void printReport(const char subjectCode[], const int studentNumbers[],const int marks[], int noOfStudents){
    int counter=0,avgMark=0,lowestMark=0,highestMark=0;
    printf("\nSUBJECT MARKS REPORT\n");
    puts("+---------------+");
    printf("|%-15s|\n",subjectCode);
    printLine();
    printf("| Std No | Mark |\n");
    printLine();

    for (int i=0;i<noOfStudents;i++){
        if(counter==0){
            lowestMark=marks[i];
            highestMark=marks[i];
        }
        else if (counter>0){
            if(marks[i]<lowestMark){
                lowestMark=marks[i];
            }
            if(marks[i]>highestMark){
                highestMark=marks[i];
            }
        }
        avgMark+=marks[i];
        printf("| %06d |%5d |\n",studentNumbers[i],marks[i]);
        counter++;
    }
    printLine();
    printf("|Average |%5d |\n",avgMark/counter);
    printf("|Highest |%5d |\n",highestMark);
    printf("|Lowest  |%5d |\n",lowestMark);
    printLine();
}//end of printReport

void printLine(void){ //prints the line
    puts("+--------+------+");
}

void newPrintLine(void){ //prints the line
    puts("+---+--------+------+");
}

void subjectMarksReport(void){
    char subjectCode[10];
     int stdnum[50];
    int mark[50];
    int noOfStudents=0,counter=0,avgMark=0,lowestMark=0,highestMark=0;
    printf("Enter Subject Name: ");
    scanf("%s",subjectCode);
    printf("Enter The Number of Students[max 50]: ");
    noOfStudents=getMMInt(1,50,"Number of Students");
    
    

    for (int i=0;i<noOfStudents;i++){//fills the array with the student info
        printf("%d:\n",i+1);
        printf("Student Number: ");
        stdnum[i]=getMMInt(9999,1000000,"Student Number");
        printf("Mark: ");
        mark[i]=getMMInt(0,100,"Mark");
    } 

    //This all comes from my printReport function but im changin it to fit the new requirements
    printf("\nSUBJECT MARKS REPORT!\n");
    puts("+-------------------+");
    printf("|%-19s|\n",subjectCode);
    newPrintLine();
    printf("|Row| Std No | Mark |\n");
    newPrintLine();

    for (int i=0;i<noOfStudents;i++){
        if(counter==0){
            lowestMark=mark[i];
            highestMark=mark[i];
        }
        else if (counter>0){
            if(mark[i]<lowestMark){
                lowestMark=mark[i];
            }
            if(mark[i]>highestMark){
                highestMark=mark[i];
            }
        }
        avgMark+=mark[i];
        printf("|%2d | %06d |%5d |\n",counter+1,stdnum[i],mark[i]);
        counter++;
    }
    newPrintLine();
    printf("| Average    |%5d |\n",avgMark/counter);
    printf("| Highest    |%5d |\n",highestMark);
    printf("| Lowest     |%5d |\n",lowestMark);
    newPrintLine();

}