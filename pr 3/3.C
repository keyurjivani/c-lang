#include<stdio.h>
#include<conio.h>
main()
{
	int n, first, last, sum;
	clrscr();
	printf("Enter Any number: ");
	scanf("%d",&n);

	last = n %10;
	first = n;
	while(first >= 10)
	{
		first = first / 10;
	}
	sum = first + last;
	printf("Sum of digit: %d",sum);
	getch();
}