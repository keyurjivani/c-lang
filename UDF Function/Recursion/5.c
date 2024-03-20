#include <stdio.h>

void ascending_order(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; ++i) 
	{
        for (j = 0; j < n - i - 1; ++j) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void descending_order(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; ++i) 
	{
        for (j = 0; j < n - i - 1; ++j) 
		{
            if (arr[j] < arr[j + 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void display_array(int arr[], int n) 
{
	int i;
    for ( i = 0; i < n; ++i) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    display_array(arr, n);

    ascending_order(arr, n);
    printf("Ascending order: ");
    display_array(arr, n);

    descending_order(arr, n);
    printf("Descending order: ");
    display_array(arr, n);

}

