#include <stdio.h>

int main()
{
    int n , m , digit = 0 , sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n); //Take a multidigit integer as input

    while (n > 0) //Run untill the number runs out
    {
        ++digit; //Add 1 to digits variable in every iteration
        m = n % 10; //Take out the last number of the input and store it to m
        sum += m; //Add m to sum.
        n /= 10; //Take out the last digit to run the next iteration
    }
    printf("Your number has %d digits in it\nThe sum of the digits: %d", digit, sum); //Print out the results
    
    return 0;
}