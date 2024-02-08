#include<stdio.h>
#include<conio.h>
main()
{
	int n,i, fact = 1;
	clrscr();

	printf("Enter Any Number: ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		fact *= i;
	}
	printf("Sum of all number: %d\n",fact);

	getch();
}