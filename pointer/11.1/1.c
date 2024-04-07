#include <stdio.h>

void square(int *arr, int size) 
{
	int i;
    printf("Square of each element:\n");
    for ( i = 0; i < size; i++)
	{
        printf("%d, ", *(arr + i) * (*(arr + i)));
    }
    printf("\n");
}

void main() 
{
    int size,i;
    
    printf("Enter the array's size: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter array's elements:\n");
    for ( i = 0; i < size; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    square(arr, size);
    

}

