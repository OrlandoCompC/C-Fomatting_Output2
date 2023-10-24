/*
MADE BY: ORLANDO COMPANIONI
EMAIL: companor@sheridancollege.ca
Date: 2023/08/29
*/
//This is just a file with functions that will be used in the main.c

#include <stdio.h>

int getMMInt(int min, int max,const char valueName[]){ 
    int returnCode,num=0,flag=1;
    char after;

    while(flag==1){
        returnCode=scanf("%d%c", &num,&after);
        if(returnCode==0){
            printf("Only Integers are accepted Please try again: ");
            while(getchar()!='\n');
        }
        else if (after != '\n'){
            printf("Please Only Enter Integers: ");
            while(getchar()!='\n');
        }
        else if(num<min || num>max){
            printf("[%d<=%s>=%d]: ",min,valueName,max);
        }
        else{
            flag=0;
        }
    }
    return num;
}

int yes(void) {//check what the user enters and returns true or false depending on the input
    char userInp[10];
    scanf("%s", userInp);
    return (userInp[0] == 'Y' || userInp[0] == 'y');
}

