#include <stdio.h>
#include <string.h>

void main() 
{
    char password[100];
    int letter = 0, digit = 0, special = 0;
    int length, i;

    printf("Create your password: ");
    scanf("%s", password);

    length = strlen(password);
    if (length < 6) 
	{
        printf("Your password is not Strong.\n");
        return 0;
    }

    for (i = 0; i < length; i++) 
	{
        if (isalpha(password[i])) 
		{
            letter = 1;
        } else if (isdigit(password[i])) 
		{
            digit = 1;
        } else if (!isalnum(password[i])) 
		{
            special = 1;
        }
    }

    if (letter && digit && special) 
	{
        printf("Your password is Strong.\n");
    } 
	else 
	{
        printf("Your password is not Strong.\n");
    }

}

