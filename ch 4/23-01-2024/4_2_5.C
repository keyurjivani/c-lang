#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, Ans;
	clrscr();

	printf("Enter the no of a: ");
	scanf("%d",&a);

	printf("Enter the no of b:");
	scanf("%d",&b);

	Ans = (a * a * a) + (b * b * b) + (3 * a * a *b) + (3 * a * b * b);

	printf("\n\nShow the ans of (a+b)^3: %d",Ans);

	getch();
}