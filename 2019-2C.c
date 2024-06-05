#include <stdio.h>

int main() {

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
    for (int i = 2; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
