#include <stdio.h>

void leap_years(int start_year, int end_year) 
{
    if (start_year > end_year)
        return;

    if ((start_year % 4 == 0 && start_year % 100 != 0) || (start_year % 400 == 0))
        printf("%d\n", start_year);

    leap_years(start_year + 1, end_year);
}

int main() 
{
    int start_year, end_year;

    printf("Enter start year: ");
    scanf("%d", &start_year);

    printf("Enter end year: ");
    scanf("%d", &end_year);

    printf("Leap years between %d and %d are:\n", start_year, end_year);
    leap_years(start_year, end_year);

}

