#include <stdio.h>
#include <string.h> //Deals with string lengths and other tools.
#include <ctype.h> //Deals with character modifications.
#include <stdlib.h> //Deals with memory allocation.

int main(void) {
    char *n;
    printf("Name? ");
    scanf("%s", n);getchar(); //n is already a pointer so we dont have to add & before storing the string
    char *m = malloc(strlen(n)+1); //One more than the length of the string is added so that it can also store the NUL or /0 character
    if (m == NULL){
        printf("Not enough memory\n");
        return 1; //Stops the process if no memory is available.
    }
    strcpy(m, n); //Copies the n pointers data to the manually allocated m pointers data.
    if (strlen(n) > 0){
        printf("Hello, %s\n", n); 
        m[0] = toupper(m[0]); // Updates the first character of the new m pointers data to uppercase
        printf("%s is a good person\n", m);
        printf("n's address %p\n", (void *) n); //Shows the first chunk of memory adress of n
        printf("m's address %p\n", (void *) m); //Shows the first chunk of memory adress of m
    }
    if (m != n ){
        free(m); //Frees the manually allocated memory given that they are not same
    }
    
    return 0;
}
