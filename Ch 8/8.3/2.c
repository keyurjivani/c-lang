#include <stdio.h>

int main() {
    int row, col,i,j;
    
    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);
    
    int a[row][col], b[row][col], c[row][col];
    
    
    printf("\nEnter array A's elements:\n");
    for( i = 0; i < row; i++) {
        for( j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    
    printf("\nEnter array B's elements:\n");
    for( i = 0; i < row; i++) {
        for( j = 0; j < col; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
   
    printf("\nArray C is:\n");
    for( i = 0; i < row; i++) {
        for( j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    
}

