#include <stdio.h>
#include<conio.h>
int main() {
    int rows, cols,i,j;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter array's elements:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int max;
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
	printf("The largest element is: %d\n", max); 
}

