#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() 
{
    char password[100];
    int has_letter = 0, has_digit = 0, has_special = 0,i;

    
    printf("Create your password: ");
    scanf("%s",&password);
    
    password[strcspn(password, "\n")] = '\0';

    
    if (strlen(password) < 6) 
	{
        printf("Your password is not Strong.\n");
        return 0;
    }

    
    for ( i = 0; password[i] != '\0'; i++) {
        if (isalpha(password[i])) {
            has_letter = 1;
        } else if (isdigit(password[i])) {
            has_digit = 1;
        } else if (!isalnum(password[i])) {
            has_special = 1;
        }
    }

    
    if (has_letter && has_digit && has_special) {
        printf("Your password is Strong.\n");
    } else {
        printf("Your password is not Strong.\n");
    }

}

