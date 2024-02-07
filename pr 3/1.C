#include<stdio.h>
#include<conio.h>
main()
{
	char a = 'a';
	clrscr();
	do
	{
		printf("%c \n",a);
		a += 4;
	}while(a<='z');
	getch();
}