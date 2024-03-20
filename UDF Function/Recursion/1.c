#include <stdio.h>


void printReverse(int n) {
    if (n == 0) 
        return;
    else {
        printf("%d", n % 10); 
        printReverse(n / 10); 
    }
}

int main() {
    int num;
    
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("The number in reverse: ");
    printReverse(num);
    
}

