#include <stdio.h>
#include<conio.h>
int main() 
{
    int size,i;
	clrscr();
    printf("Enter array size: ");
    scanf("%d", &size);

    int arrA[size], arrB[size], arrC[size];

    printf("Enter array A's elements:\n");
    for ( i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arrA[i]);
    }

    printf("Enter array B's elements:\n");
    for ( i = 0; i < size; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &arrB[i]);
    }

    printf("Array C is: ");
    for ( i = 0; i < size; i++) {
        arrC[i] = arrA[i] + arrB[i];
        printf("%d", arrC[i]);
        
            printf(" , ");
    }
    printf("\n");

    getch();
}

