#include <stdio.h>

int main()
{
    /*The main and only problem in this algorithm: if we count 30 days in a month, 365 days does not equal 1 year, 360 days does.
    For example 1460 days equals to 3 years 11 months and 29 days. But this algorithm would be inaccurate in counting that.
    So only in those cases (where there is a leap year and the days are exactly the amount of days in those years) this code is limited.
    But if we assume 360 days in 1 year the code mostly stays accurate.
    You are welcomed to make changes and see if you can make this code inaccurate */
    int num1, num2, year, month, day, leap;
    printf("Number of days: ");
    scanf("%d", &num1);

    year = num1 / 360;
    leap = year / 4;
    num2 = num1 % 360;

    if (num2 > leap)
    {
        day = num2 - leap;
        if (day < 30)
        {
            printf("%d years\n%d days\nAmong which there are %d leap years", year, day, leap);
        }
        else
        {
            month = day / 30;
            day %= 30;
            printf("%d years\n%d months\n%d days\nAmong which there are %d leap years", year, month, day, leap);
        }
    }
    else if (num2 == leap)
    {
        printf("%d years\nAmong which there are %d leap years", year, leap);
    }
    else
    {
        num2 = num1 - leap;
        year = num2 / 360;
        num2 %= 360;
        day = num2;
        if (day < 30)
        {
            printf("%d years\n%d days\nAmong which there are %d leap years", year, day, leap);
        }
        else
        {
            month = day / 30;
            day %= 30;
            printf("%d years\n%d months\n%d days\nAmong which there are %d leap years", year, month, day, leap);
        } 
    }
    
    return 0;
}
