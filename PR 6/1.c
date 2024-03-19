#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start = 0, end, is_palindrome = 1;

    printf("Enter any string: ");
    scanf("%100[^\n]", str);

    
    for (end = 0; str[end] != '\0'; end++);
    end--;

    
    while (start < end) {
        
        while (!isalnum(str[start]) && start < end)
            start++;
        
        while (!isalnum(str[end]) && start < end)
            end--;
        if (tolower(str[start]) != tolower(str[end])) {
            is_palindrome = 0;
            break;
        }
        start++;
        end--;
    }

    
    if (is_palindrome) {
        printf("Given string is a Palindrome.\n");
    } else {
        printf("Given string is not a Palindrome.\n");
    }
}

