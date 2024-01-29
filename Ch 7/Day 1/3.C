#include<stdio.h>
#include<conio.h>

main()
{
	char ch;
	clrscr();

	printf("Enter the character: ");
	scanf("%c",&ch);



	if(ch == 'a' || ch == 'u' || ch == 'o' || ch == 'i' || ch == 'e'||
	   ch == 'A' || ch == 'U' || ch == 'O' || ch == 'I' || ch == 'E')
	{
		printf("%c is vowel",ch);
	}
	else
	{
		printf("%c is constant",ch);
	}

	getch();
}