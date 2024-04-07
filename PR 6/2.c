#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int frequency[26];
	int i;
    printf("Enter any string: ");
    scanf("%[^\n]", str);

    for ( i = 0; str[i] != '\0'; i++) 
	{
        if (str[i]) 
		{
            int index = str[i] - 'a';
            frequency[index]++;
        }
    }

    printf("Frequency of each letter:\n");
    for ( i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            printf("%c => %d\n", 'a' + i, frequency[i]);
        }
    }
}

