#include <stdio.h>
#include <stdlib.h>

void pyramid(int n); //Prototype

int main(int argc, char *argv[]){ //Initialize the main to take inputs from CLI
    if (argc != 2){
        printf("invalid command"); //If there is no command, quit
        return 1;
    }
    int n = atoi(argv[1]); //a to i means ascii to integer. This is needed because the input command is taken in as a string or character. This transforms character numbers to integers 
    pyramid(n); //Calls the main operations function

    return 0;
}

void pyramid(int n){
    //This function takes integers as arguements and makes a pyramid of numbers 
    for (int i = 1; i <= n ; i++){
        for (int j = 1; j <= i; j++){
            printf("%i", j);
        }
        printf("\n");
    }
    return; //returns nothing as it does not need to return anything.
}