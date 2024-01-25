#include<stdio.h>
#include<conio.h>
main()
{
	int a, b, c;
	clrscr();

	printf("Enter the value of a: ");
	scanf("%d",&a);

	printf("Enter the value of b: ");
	scanf("%d",&b);

	c = 180 - a - b;

	printf("Ans of c: %d",c);

	getch();
}
