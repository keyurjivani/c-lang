#include<stdio.h>
#include<conio.h>
void main()
{
	int first, second, temp;
	clrscr();
	printf("Enter the first number: ");
	scanf("%d",&first);

	printf("Enter the second number: ");
	scanf("%d",&second);

	temp = first;
	first = second;
	second = temp;

	printf("After swaping, first number: %d\n",first);
	printf("After swaping, second number: %d\n",second);
	getch();

}