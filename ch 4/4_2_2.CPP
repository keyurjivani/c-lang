#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b;
	clrscr();

	printf("Enter the number of a: ");
	scanf("%d",&a);

	printf("Enter the number of b: ");
	scanf("%d",&b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("\n\nSwaping number of a: %d\n",a);
	printf("Swaping number of b: %d\n",b);

	getch();
}