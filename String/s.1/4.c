#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
	int i;
  
    printf("Enter any string: ");
    scanf("%s",&str);

    int capital = 1; 
    for (i = 0; str[i] != '\0'; i++) 
	{
        if (capital && isalpha(str[i])) 
		{
            str[i] = toupper(str[i]);
            capital = 0;
        } 
		else if (isspace(str[i]) || str[i] == '\n') 
            capital = 1;
        } 
		else 
		{
            str[i] = tolower(str[i]);
        }
    }

    
    printf("Title Case string: %s", str);
 
}

