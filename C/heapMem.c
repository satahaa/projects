#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *list = malloc(3 * sizeof(int)); // Allocate memory for 3 integers

    if (list == NULL) {
        return 1; // Return an error code if memory allocation fails
    }

    list[0] = 0;
    list[1] = 5;
    list[2] = 10;

    printf("list:\n");

    for (int i = 0; i < 3; i++) {
        printf("%i\n", list[i]);
    }

    int *tmp = realloc(list, 5 * sizeof(int)); // Reallocate memory for 5 integers

    if (tmp == NULL) {
        free(list);
        return 1; // Return an error code if memory reallocation fails
    }

    tmp[3] = 15;
    tmp[4] = 20;

    // Reassign the 'tmp' pointer back to 'list'
    list = tmp;

    printf("Modified list:\n");

    for (int i = 0; i < 5; i++) {
        printf("%i\n", list[i]); // Print from 'list', which now holds the modified data
    }

    // No need to free 'list' here, since 'tmp' has been assigned to it

    free(list); // Free the final allocated memory

    return 0;
}
