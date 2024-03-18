#include <stdio.h>
#include<conio.h>
int main() {
    int sizeA, sizeB, i;
    printf("Enter array A's size: ");
    scanf("%d", &sizeA);

    int arrA[sizeA];

    printf("Enter array A's elements:\n");
    for ( i = 0; i < sizeA; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arrA[i]);
    }
	printf("\n\n\n");
    printf("Enter array B's size: ");
    scanf("%d", &sizeB);

    int arrB[sizeB];

    printf("Enter array B's elements:\n");
    for ( i = 0; i < sizeB; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &arrB[i]);
    }
	printf("\n\n\n");
    int sizeC = sizeA + sizeB;
    int arrC[sizeC];

   
    for ( i = 0; i < sizeA; i++) {
        arrC[i] = arrA[i];
    }

   
    for ( i = 0; i < sizeB; i++) {
        arrC[sizeA + i] = arrB[i];
    }

    printf("Array C is: ");
    for ( i = 0; i < sizeC; i++) {
        printf("%d", arrC[i]);
            printf(" , ");
    } 
}

