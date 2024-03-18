#include <stdio.h>

int main() {
    int size,i;
    clrscr();
    
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements:\n");
    for ( i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Length of the array: %d\n", size);

   getch();
}

