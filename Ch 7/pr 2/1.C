#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	printf(" Enter a charater: ");
	scanf("%c",&ch);

	clrscr();

	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		printf("%c is alphabet.\n",ch);
	}
	else if(ch >= '0' && ch <='9')
	{
		printf("%c is digit.\n");
	}
	else
	{
		printf("%c is special character.\n");
	}
	getch();
}