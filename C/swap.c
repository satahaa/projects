#include <stdio.h>

void swap(int *a , int *b); //Prototype

int main(void){
    int x = 1; 
    int y = 2;
    printf("x : %i and y : %i\n", x, y);
    swap(&x, &y); //Swap function takes 2 poiters of a character to swap
    printf("x : %i and y : %i\n", x, y);
    return 0;
}

void swap(int *a , int *b){
    //This takes a tmp variable which copies the pointer a. Then a copies the pointer b and then b copies the pointer a which is strored in tmp variable
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
