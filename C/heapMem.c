#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *list = malloc(3 * sizeof(int)); //Allocate me 3, 4 bytes of memory.

    if (list == NULL ){
        free(list);
        return 1; //If memory is not available return an error code.
    }
    //The code does the math for me and figures out which 3 memory chuncks are side to side so that it can store my given integers.
    list[0] = 0;
    list[1] = 5;
    list[2]= 10;

    printf("list:\n");

    for (int i = 0; i < 4; i++ ){
        printf("%i\n", list[i]); //Prints out the numbers in new line by iterating through the memory pointers. 
    }

    //time passes

    int *tmp = malloc(4 * sizeof(int)); //We make a temporary memory pointer and make it bigger than before so that we can dynamically update our memory chunk 
    if ( tmp == NULL){
        free(tmp);
        return 1; //Same as before
    }
    for (int i = 0; i < 3; i++){
        tmp[i] = list[i]; //Copies the stored data in the list array to the new temporary array.
    }
    tmp[3] = 15; //Adds the new data in the next chunk
    free(list);
    list = tmp; //Copy the tempory pointer to the original name.
    

    printf("Modified list:\n");
    
    for (int i = 0; i < 4; i++ ){
        printf("%i\n", list[i]); //Prints through the new list.
    }
    
    free(list); //Frees the list after it is done working.
}