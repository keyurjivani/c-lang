#include <stdio.h>
#include <ctype.h>

int main() 
{
    char str[100];

    
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
 
    int i = 0, j = 0;
    while (str[i] != '\0') 
	{
        while (str[i] == ' ') 
		{
            i++;
        }
        if (str[i] != '\0') 
		{
            if (j > 0) 
			{
                str[j] = toupper(str[i]);
                j++;
            } 
			else 
			{
                str[j] = tolower(str[i]);
                j++;
            }
            i++;
            while (str[i] != ' ' && str[i] != '\0') 
			{
                str[j] = tolower(str[i]);
                i++;
                j++;
            }
        }
    }
    str[j] = '\0'; 

    printf("camelCase string: %s\n", str);
}

