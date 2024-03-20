#include <stdio.h>

int squares(int n) {
    if (n == 0)
        return 0;
    int digit = n % 10;
    return digit * digit + squares(n / 10);
}


int magic(int n) {
    if (n == 1 || n == 4)
        return n;

    return magic(squares(n));
}

int main() {
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (magic(num) == 1)
        printf("%d is a magic number.\n", num);
    else
        printf("%d is not a magic number.\n", num);

    
}

