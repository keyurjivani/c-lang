#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	int first=0, second=0, next;
	clrscr();

	printf("Enter any Number: ");
	scanf("%d",&n);

	for(i = 0; i< n; i++)
	{
		if(i<=1)
		{
			next = i;
		}
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		printf("%d", next);
	}

	getch();
}