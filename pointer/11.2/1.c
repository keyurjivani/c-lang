#include <stdio.h>

void reverse(int *arr, int size) 
{
    int *start = arr; 
    int *end = arr + size - 1; 
    
    while (start < end) 
	{
        int temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
}

void main() 
{
    int size,i;
    
    printf("Enter the array's size: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("\nEnter array elements:\n");
    for ( i = 0; i < size; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    reverse(arr, size);
    
    printf("\nReversed array elements:\n");
    for ( i = 0; i < size; i++) 
	{
        printf("%d", arr[i]);
            printf(", ");
    }
    printf("\n");
    

}

