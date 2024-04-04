#include <stdio.h>


void Cubes(int *arr, int rows, int cols) {
	int i,j;
    printf("Cubes of array elements:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            int cube = *(arr + i * cols + j) * *(arr + i * cols + j) * *(arr + i * cols + j);
            printf("a[%d][%d] = %d\n", i, j, cube);
        }
    }
}

int main() {
    int size;
    int i,j;
   
    printf("Enter array's size: ");
    scanf("%d", &size);

    
    int arr[size][size];

    
    printf("Enter array elements:\n");
    for ( i = 0; i < size; i++) {
        for ( j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    
    Cubes(&arr[0][0], size, size);

    return 0;
}
