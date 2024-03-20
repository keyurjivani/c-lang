#include <stdio.h>


void decimalToBinary(int n) {
    if (n == 0) {
        printf("0"); 
        return;
    }
    if (n == 1) {
        printf("1"); 
        return;
    }
    decimalToBinary(n / 2); 
    printf("%d", n % 2); 
}

int main() {
    int number;
    
   
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    
   
    if (number < 0) {
        printf("Please enter a non-negative number.\n");
        return 1; 
    }
    
    printf("Binary representation: ");
    decimalToBinary(number);
    printf("\n");
    
}

