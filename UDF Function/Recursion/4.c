#include <stdio.h>

void alphabets(char start, char end) 
{
    if (start > end)
        return;

    printf("%c ", start);
    alphabets(start + 1, end);
}

int main() 
{
    char lowercase_start = 'a';
    char lowercase_end = 'z';
    char uppercase_start = 'A';
    char uppercase_end = 'Z';

    printf("Lowercase alphabets: ");
    alphabets(lowercase_start, lowercase_end);
    printf("\n");

    printf("Uppercase alphabets: ");
    alphabets(uppercase_start, uppercase_end);
    printf("\n");

}

