#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start = 0, end, palindrome = 1;

    printf("Enter any string: ");
    scanf("%[^\n]", str);

    
    for (end = 0; str[end] != '\0'; end++);
    end--;

    
    while (start < end) {
        
        while (!(str[start]) && start < end)
            start++;
        
        while (!(str[end]) && start < end)
            end--;
        if ((str[start]) != (str[end])) {
            palindrome = 0;
            break;
        }
        start++;
        end--;
    }

    
    if (palindrome) {
        printf("Given string is a Palindrome.\n");
    } else {
        printf("Given string is not a Palindrome.\n");
    }
}

