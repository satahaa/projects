#include <stdio.h>

int main(void) {
    int n;
    printf("Height?\n"); //Ask user for height.
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            printf(" "); //Iterate to create whitespaces in descending order
        }

        for (int k = 1; k <= i; k++) {
            printf("%d", k); //Print the numbers
        }

        printf("\n");
    }

    return 0; //All done
}
