#include <stdio.h>

int main() {
    int row, col,i,j;
    float sum = 0.0, average;
    
  
    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);
    
    int array[row][col];
    
    
    printf("\nEnter array's elements:\n");
    for( i = 0; i < row; i++) {
        for( j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
    }
    
    
    average = sum / (row * col);
    
    
    printf("\nAverage of an Array: %.2lf\n", average);
    
}

