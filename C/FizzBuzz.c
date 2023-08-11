#include <stdio.h>

int fizzbuzz(int n);

int main(void){
    int n;
    char c;
    printf("Range? ");
    scanf("%i", &n); getchar();
    fizzbuzz(n);
    printf("Run again?(y/n) ");
    scanf("%c", &c); getchar();

    if (c == 'y'){
        main();
    }else if (c == 'n'){
        printf("Okay. Exiting...\n");
        return 0;
    }else{
        printf("Invalid Command.\n");
        return 1;
    }
}

int fizzbuzz(int n){
    for (int i = 1; i <= n; i++){
        if (i % 3 == 0 && i % 5 == 0 ){
            printf("FizzBuzz\n");
        }else if (i % 3 == 0){
            printf("Fizz\n");
        }else if (i % 5 == 0){
            printf("Buzz\n");
        }else{
            printf("%i\n", i);
        }
    }
    return 0;
}