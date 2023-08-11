#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    char *n;
    printf("Name? ");
    scanf("%s", n);getchar();
    char *m = malloc(strlen(n)+1);
    if (m == NULL){
        printf("Not enough memory\n");
        return 1;
    }
    strcpy(m, n);
    if (strlen(n) > 0){
        printf("Hello, %s\n", n);
        m[0] = toupper(m[0]);
        printf("%s is a good person\n", m);
        printf("n's address %p\n", (void *) n);
        printf("m's address %p\n", (void *) m);
    }
    if (m != n ){
        free(m);
    }
    
    return 0;
}
