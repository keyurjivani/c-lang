#include <stdio.h>
#include <string.h>
void main() 
{
    char password[100];
    int letter = 0, digit = 0, special = 0,i;

    
    printf("Create your password: ");
    scanf("%s",&password);
    
    password[strcspn(password, "\n")] = '\0';

    if (strlen(password) < 6) 
	{
        printf("Your password is not Strong.\n");
        return 0;
    }

    
    for ( i = 0; password[i] != '\0'; i++) 
	{
        if (isalpha(password[i])) 
		{
            letter = 1;
        } 
		else if (isdigit(password[i])) 
		{
            digit = 1;
        } 
		else if (!isalnum(password[i])) 
		{
            special = 1;
        }
    }

    
    if (letter && digit && special) {
        printf("Your password is Strong.\n");
    } else {
        printf("Your password is not Strong.\n");
    }

}

