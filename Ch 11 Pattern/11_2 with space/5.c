#include <stdio.h>

main() 
{
    int i, j, k;
    //clrscr();
    for (i = 0; i < 5; i++) 
    {
        for (k = 0; k < i; k++) 
        {
            printf("   "); 
        }
        for (j = 5 - i; j >= 1; j--) 
        {
            printf(" %d ", j);
        }
        printf("\n"); 
    }
    //getch();
}

