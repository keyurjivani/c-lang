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
        for (j = 1; j <= i; j++) {
            printf("%d ", 5 - i + 1); 
        }
        printf("\n"); 
    }
    getch();
}

