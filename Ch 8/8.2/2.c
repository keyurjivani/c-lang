#include <stdio.h>
#include<conio.h>
int main() {
    int first, second,year;
    printf("Enter the first number: ");
    scanf("%d", &first);
    printf("Enter the second number: ");
    scanf("%d", &second);

    int leap_years[100]; // Assuming a maximum of 100 leap years
    int count = 0;

    printf("The array is: ");

    for ( year = first; year <= second; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            leap_years[count] = year;
            printf("%d", leap_years[count]);
            if (year != second)
                printf(" , ");
            count++;
        }
    }
}

