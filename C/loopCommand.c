#include <stdio.h>
char properties(int n); //Prototypes
void num(void);

int main(void){
    char cmd;
    printf("Do you wish to run command?\n");
    scanf("%c", &cmd);
    getchar(); //Newline buffer fix
    if (cmd == 'y'){
        num(); //Runs this intermediate function on command
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
    properties(num); //Runs the main "main" function.
}

char properties(int n){
    char cmd;
    if (n % 2 == 0){ //Runs the modulo function to check parity
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    printf("Do you wish to continue?(y/n)\n");
    scanf("%c", &cmd);
    getchar();
    if (cmd == 'y'){
        num(); //loops through the intermediate function and this one on command
    }else if (cmd == 'n'){
        printf("Okay, Exiting..."); //Simple exit command
    }else{
        printf("Invalid Command. Exiting...\n");
    }
}
