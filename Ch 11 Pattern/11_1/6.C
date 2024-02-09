#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	clrscr();
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5-i+1; j++)
		{
			printf("%d",(j%2));
		}
		printf("\n");
	}
	getch();
}
