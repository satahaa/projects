#include <stdio.h>
int swap(int *x, int *y);
int main(){
    int a, b;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    printf("initial a: %d\n", a);
    printf("initial b: %d\n", b);
    swap(&a,&b);
    printf("final a: %d\n", a);
    printf("final b: %d\n", b);
    return 0;
}

int swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
    return 0;
}