#include <stdio.h>

int duplicate(int n);
int main() {
    //initialize first three variables.
    int start;
    int end;
    char cmd;

    printf("Start? ");
    scanf("%i", &start); getchar();
    printf("End? ");
    scanf("%i", &end); getchar();

    for (int num = start; num <= end; num++) {
        if (duplicate(num)) { //This conditional checks if the function returns 1 or True which would mean the number has duplicates
            printf("%d\n", num); //We print that number in the new line untill the loop ends.
        }
    }

    printf("Run again?(y/n) ");
    scanf("%c", &cmd); getchar();
    if (cmd == 'y'){ //If the user wants to run the main function again we recursively call it.
        main();
    }else if (cmd == 'n'){ //untill the user says no.
        printf("Exiting...");
        return 0;
    }else{ //Or the user tries to fool around. in which case the CPU will log the error.
        printf("Invalid command. Exiting...");
        return 1;
    }
}

int duplicate(int num) {
    int arr[10] = {0}; //An array is initialized and the elements are set to 0. 10 Elements so that we can have it from 0 to 9 

    //As we cannot compare between numbers inside a number we have to use and array as a tick list to determine if a duplicate exists.
    while (num > 0) {
        int n = num % 10; //We find out the last number in the given number
        if (arr[n] == 1) { //We find out what is in the index of the number in the arr array which is 0  
            return 1; //We repeat untill we find a duplicate given that the index we searched contained 1 which would mean we encountered it before and return 1 as in True
        }
        arr[n] = 1; //We set that last number index as 1 so that if we encounter it again we can check that index if it already one so that we know its a duplicate
        num = num / 10; //We remove the last number from the actual number.
    }
    
    return 0; //We return 0 or False if we dont find anything
}

