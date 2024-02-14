#include <stdio.h>

main() {
    int i, j, k; 
    clrscr();
    for (i = 1; i <= 5; i++) 
	{
        for (k = 1; k <= 5 - i; k++)
		{
            printf("   "); 
        }
        for (j = i; j <= 5; j++) {
            printf(" %d ", j); 
        }
        printf("\n"); 
    }
	getch();
}

