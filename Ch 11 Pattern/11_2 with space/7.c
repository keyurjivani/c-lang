#include <stdio.h>

main() 
{
    int i, j, l;
    clrscr();
    for (i = 0; i < 5; i++) 
    {
        for (j = 1; j <= 5 - i; j++) 
        {
            printf("%2d ", j); 
        }
        for (l = 0; l < 2 * i; l++) 
        {
            printf("   "); 
        }
        for (j = 5 - i; j >= 1; j--) 
        {
            printf("%2d ", j);
        }
        printf("\n");
    }
    getch();
}

