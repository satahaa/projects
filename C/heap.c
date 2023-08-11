#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *list = malloc(3 * sizeof(int));

    if (list == NULL ){
        free(list);
        return 1;
    }

    list[0] = 0;
    list[1] = 5;
    list[2]= 10;

    printf("list:\n");

    for (int i = 0; i < 4; i++ ){
        printf("%i\n", list[i]);
    }

    //time passes

    int *tmp = malloc(4 * sizeof(int));
    if ( tmp == NULL){
        free(tmp);
        return 1;
    }
    for (int i = 0; i < 3; i++){
        tmp[i] = list[i];
    }
    tmp[3] = 15;
    free(list);
    list = tmp;
    

    printf("Modified list:\n");
    
    for (int i = 0; i < 4; i++ ){
        printf("%i\n", list[i]);
    }
    
    free(list);
}