#include <stdio.h>
#include <stdlib.h>

typedef struct node { //Makes a new datatype named node
    char abc;
    struct node *addr;
} node;

int main(void) {
    node *list = NULL; //Initialize the first pointer named list
    node *n = malloc(sizeof(node)); //Allocates the total size needed for node and makes a pointer n that points to that memory
    if (n == NULL) {
        return 1; //Error if there is not enough memory
    }
    n->abc = 'a'; //First character in the node pointer n
    n->addr = NULL; //First address associated with the first pointer n which is pointed to NULL initially 
    list = n; //Appoint n as list

    n = malloc(sizeof(node)); //repeat
    if (n == NULL) {
        free(list);
        return 1;
    }
    n->abc = 'b';
    n->addr = NULL;
    list->addr = n; //Updates the address in the list as the pointer of this second character

    n = malloc(sizeof(node)); //repeat
    if (n == NULL) {
        free(list->addr);
        free(list);
        return 1;
    }
    n->abc = 'c';
    n->addr = NULL;
    list->addr->addr = n; //Updates the second pointers address as this one which initially points at the first pointers address

    for (node *tmp = list; tmp != NULL; tmp = tmp->addr) {
        printf("%c\n", tmp->abc); //Print the linked list
    }
    printf("\n"); 

    while (list != NULL) {
        node *tmp = list->addr;
        free(list); //frees the memory one by one
        list = tmp;
    }

    return 0;
}
