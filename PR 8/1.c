#include <stdio.h>


int Length(char *str) {
    int length = 0;

    
    while (*str != '\0') {
        length++;
        str++; 
    }

    return length;
}

int main() {
    char str[100];
	int n;
   
    printf("Enter any string: ");
   
   scanf("%[^\n]",&str);
   

    
    n = Length(str);

    
    printf("The length of the string is: %d\n", n);

    return 0;
}
