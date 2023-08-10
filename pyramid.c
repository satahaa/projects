#include <stdio.h>
#include <stdlib.h>

void pyramid(int n);
int main(int argc, char *argv[]){
    if (argc != 2){
        printf("invalid command");
        return 1;
    }
    int n = atoi(argv[1]);
    pyramid(n);

    return 0;
}

void pyramid(int n){
    for (int i = 1; i <= n ; i++){
        for (int j = 1; j <= i; j++){
            printf("%i", j);
        }
        printf("\n");
    }
    return;
}