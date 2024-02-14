#include <stdio.h>

main() 
{
    int i, j;
	clrscr();
    for (i = 1; i <= 5; i++) 
    {
        for (j = 1; j <= 5 - i; j++) 
        {
            printf("   "); 
        }
        for (j = 1; j <= i; j++)
        {
            printf("%2d ", j);
        }
        for (j = i - 1; j >= 1; j--) 
        {
            printf("%2d ", j); 
        }
        printf("\n"); 
    }
    getch();
}

