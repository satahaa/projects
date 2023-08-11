#include <stdio.h>

int main(void){
    int n;
    printf("Height of the pyramid?\n");
    scanf("%i", &n);
    for(int i = 0; i <= n; i++){
        for (int j = 0; j <= n-1; j++){
            printf(" "); //Print spaces
        }
        
        for (int k = 1; k <= i; k++){
            printf("%i", k); //Print numbers in an ascending order
        }
    
    printf("\n");
    }


    return 0;
}