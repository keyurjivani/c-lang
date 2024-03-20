#include <stdio.h>


int find_largest(int arr[], int n) {
    int largest = arr[0],i;
    for ( i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
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

    int largest = find_largest(arr, n);
    printf("The largest number in the array is: %d\n", largest);

    return 0;
}

