#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
	int i;
   
    printf("Enter any string: ");
    scanf("%s",&str);

    
    for ( i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] >= 'A' && str[i] <= 'Z') 
		{
            str[i] = str[i] + 32;
        }
    }

    printf("Uppercase string: %s", str);
}

