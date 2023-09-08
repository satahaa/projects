#include <stdio.h>
#include <math.h>

int rootable(int n); //prototype

int main()
{
    int a, b, c, n;
    float x1, x2;
    printf("a, b, c?: "); 
    scanf("%d %d %d", &a, &b, &c); // Taking in the values of a b and c from the equation: ax^2 + bx + c.
    n = b * b - 4 * a * c; //Calculating the discriminant.

    if (n == 0) //If the discriminant is 0, the roots are equal
    {
        x1 = -b / (2.0 * a);
        printf("x : %.2f\nBoth roots of this equation are real and equal", x1);
    }
    else if (n > 0 && rootable(n) == 0) //If the discriminant is positive and it is a perfect square root, both roots are real and rational. 
    {
        x1 = (-b + sqrt(n)) / (2.0 * a);
        x2 = (-b - sqrt(n)) / (2.0 * a);
        printf("x1 : %.2f\nx2 : %.2f\nBoth roots are real, rational, and inequal", x1, x2);
    }
    else if (n > 0) //If the discriminant is not a perfect square root, the roots will be irrational
    {
        x1 = (-b + sqrt(n)) / (2.0 * a);
        x2 = (-b - sqrt(n)) / (2.0 * a);
        printf("x1 : %.2f\nx2 : %.2f\nBoth roots are real, irrational, and inequal", x1, x2);
    }
    else //if the discriminant is negetive the roots will be imaginary.
    {
        printf("The roots of this equation are imaginary and cannot be calculated by this program.");
    }
    return 0;
}

int rootable(int n)
{
    int m = sqrt(n);
    if (m == (int) m) //If m is the same as the integer part of m, we can say n is a perfect square root. 
    {
        return 0; //returns 0 if it is a perfect square root.
    }
    else 
    {
        return 1; //returns 1 if its not.
    }
}
