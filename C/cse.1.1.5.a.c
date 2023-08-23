#include <stdio.h>

int main() {
    int n;
    printf("Height: ");
    scanf("%d", &n);

    // Upside-down one-sided pyramid
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Right-side-up one-sided pyramid
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
