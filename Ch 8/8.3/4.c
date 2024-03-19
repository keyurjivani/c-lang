#include <stdio.h>

#define ROWS 5
#define COLS 5

int main() {
    int array[ROWS][COLS];
    int sum = 0,i,j;


    printf("Enter array's elements:\n");
    for ( i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLS; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

   
    printf("\nThe array and its boundary elements:\n");
    for ( i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLS; j++) {
            if (i == 0 || i == 4 || j == 0 || j == 4) {
                printf("%d ", array[i][j]);
                sum += array[i][j];
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }


    printf("\nThe sum of boundary elements of an Array: %d\n", sum);


}

