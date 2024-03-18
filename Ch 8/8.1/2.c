#include <stdio.h>

int main() {
    int size,i,length=0;
    clrscr();
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for ( i = 0; i < size; i++) {
    	printf("Enter Array [%d] : ",i);
        scanf("%d", &arr[i]);
    }

    printf("The elements you entered are: ");
    for ( i = 0; i < size; i++) {
        printf("Array [%d] : %d \n",i+1, arr[i]);
    }
    //printf("\n");

	for ( i = 0; i < size; i++) {
        length += arr[i];
    }
    printf("%d",length/size);
    getch();
}

