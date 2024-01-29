#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	clrscr();

	printf("Enter the character: ");
	scanf("%c",&ch);

	if(ch = 'a' || ch = 'u' || ch = 'i' || ch = 'o' || ch = 'e')
	{
		printf("%c is vowel",ch);
	}
	else
	{
		printf("%c is constant",ch);
	}

	getch();
}