#include <stdio.h>
#include<conio.h>
int main() {
    int size,i;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements:\n");
    for ( i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("The squares are: ");
    for ( i = 0; i < size; i++) {
        printf("%d", arr[i] * arr[i]);
            printf(" , ");
    }
}

