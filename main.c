/*
MADE BY: ORLANDO COMPANIONI
EMAIL: companor@sheridancollege.ca
Date: 2023/08/29

CLI COMMAND gcc -o orlando main.c classList.c utils.c

This is the part 2, here I am also printing the marks report but with input validation.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "classList.h"
#include "utils.h"


int main(void) {
    printf("SUBJECT Performance report!\n");
    printf("-------------------------\n");
    do {
    subjectMarksReport();
    printf(" Exit? Y/N:");
    } while(!yes());
    return 0;
}//end of main