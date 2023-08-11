#include <stdio.h>

int fizzbuzz(int n); //Prototype

int main(void){
    int n;
    char c;
    printf("Range? ");
    scanf("%i", &n); getchar(); //Newline input buffer solve
    fizzbuzz(n); //Run main operations on main function
    printf("Run again?(y/n) ");
    scanf("%c", &c); getchar();

    if (c == 'y'){ 
        main(); //If user says yes run this main function again.
    }else if (c == 'n'){ //If not exit
        printf("Okay. Exiting...\n");
        return 0;
    }else{ //If the user tries to fool around we quit
        printf("Invalid Command.\n");
        return 1;
    }
}

int fizzbuzz(int n){ //Main operations
    for (int i = 1; i <= n; i++){ //In range 1 to n
        if (i % 3 == 0 && i % 5 == 0 ){
            printf("FizzBuzz\n"); //Print fizzbuzz if the number is divisible by 3 and 5
        }else if (i % 3 == 0){
            printf("Fizz\n"); //Print fizz if the number is divisible by 3
        }else if (i % 5 == 0){
            printf("Buzz\n"); //Print buzz if the number is divisible by 5
        }else{
            printf("%i\n", i); //Or just print the numbers
        }
    }
    return 0;
}

// Test on 10,000 ints, Time : 20.57 seconds