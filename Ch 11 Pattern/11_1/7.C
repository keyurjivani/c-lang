#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	char c = 'A';
	clrscr();
	
	for(i=1; i<=5; i++)
	{
		for(j=0; j< i; j++)
		{
			printf("%c",c-j);
		}
		printf("\n");
		c++;
	}
	getch();
}
