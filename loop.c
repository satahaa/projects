#include <stdio.h>
char properties(int n);
void num(void);

int main(void){
    char cmd;
    printf("Do you wish to run command?\n");
    scanf("%c", &cmd);
    getchar();
    if (cmd == 'y'){
        num();
    }else if (cmd == 'n'){
        printf("Okay Exiting command...");
    }else{
        printf("Invalid command. Exiting...");
    }
    return 0;
}

void num(void) {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    getchar();
    printf("The given number is ");
    properties(num);
}

char properties(int n){
    char cmd;
    if (n % 2 == 0){
        printf("Even\n");    ;
    } else {
        printf("Odd\n");
    }
    printf("Do you wish to continue?(y/n)\n");
    scanf("%c", &cmd);
    getchar();
    if (cmd == 'y'){
        num();
    }else if (cmd == 'n'){
        printf("Okay, Exiting...");
    }else{
        printf("Invalid Command. Exiting...");
    }
}