#include <stdio.h>

int main() {
    int d1, d2, m1, m2, y1, y2, years, months, days;

    printf("Date of birth (d m y): ");
    scanf("%d %d %d", &d1, &m1, &y1);

    printf("Current date (d m y): ");
    scanf("%d %d %d", &d2, &m2, &y2);

    if (y1 < 0 || y2 < 0 || m1 < 1 || m1 > 12 || m2 < 1 || m2 > 12 || d1 < 1 || d1 > 31 || d2 < 1 || d2 > 31) {
        printf("Invalid date(s) entered\n");
        return 1;
    }

    years = y2 - y1;
    months = m2 - m1;
    days = d2 - d1;

    if (days < 0) {
        months--;
        days += 30;
    }

    if (months < 0) {
        years--;
        months += 12;
    }

    printf("You are %d years %d months and %d days old\n", years, months, days);

    return 0;
}
