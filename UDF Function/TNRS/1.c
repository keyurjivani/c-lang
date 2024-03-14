#include <stdio.h>


int sumof(int arr[], int size) {
    int total = 0,i;
    for ( i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

void main() {
    int size,i;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);


    int array[size];

   
    printf("Enter the elements of the array:\n");
    for ( i = 0; i < size; i++) 
	{
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }

   
    int sum = sumof(array, size);


    printf("Sum of array elements: %d\n", sum);

  
}

