#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "librery.h"

char** line;
int ran_num;

void takeLine(){
    
}

void randomNum(){
    ran_num = random();
}

void firstLevel(){
    int i = 0, numError;
    randomNum();
    while (1){
        if (line[ran_num][i] == "/n"){
            break;
        }
        
        char letter;
        printf(line[ran_num][i]);
        scanf(" %c", letter);
        if (letter != line[ran_num][i]){
            numError++;
        }
        i++;
    }

    printf(/*inserire*/"");
    
}

void secondLevel(){}

void therdLevel(){}

void selectlevel(){
    char ty;
    printf("Select the type of level that you want to do: \n");
    printf("1. easy level: you have to type all the letter one by one; \n");
    printf("2. medium level: you have to type the line, without timer; \n");
    printf("3. hard level: you have to type the line in an amount of time. \n");
    printf("q to quit.");
    printf("> ");
    scanf("%c", ty);

    switch (ty){
        case '1':
            firstLevel();
        break;

        case '2':
            secondLevel();
        break;

        case '3':
            therdLevel();
        break;

        case 'q':
            
        break;
    
    default:
        break;
    }
}

int main(int argc, char const *argv[]){
    
    selectlevel();
    

    return 0;
}
