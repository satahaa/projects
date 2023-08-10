#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char abc;
    struct node *addr;
} node;

int main(void) {
    node *list = NULL;
    node *n = malloc(sizeof(node));
    if (n == NULL) {
        return 1;
    }
    n->abc = 'a';
    n->addr = NULL;
    list = n;

    n = malloc(sizeof(node));
    if (n == NULL) {
        free(list);
        return 1;
    }
    n->abc = 'b';
    n->addr = NULL;
    list->addr = n;

    n = malloc(sizeof(node));
    if (n == NULL) {
        free(list->addr);
        free(list);
        return 1;
    }
    n->abc = 'c';
    n->addr = NULL;
    list->addr->addr = n;

    for (node *tmp = list; tmp != NULL; tmp = tmp->addr) {
        printf("%c\n", tmp->abc);
    }
    printf("\n"); 

    while (list != NULL) {
        node *tmp = list->addr;
        free(list);
        list = tmp;
    }

    return 0;
}
