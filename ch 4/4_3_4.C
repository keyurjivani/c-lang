#include<stdio.h>
#include<conio.h>
main()
{
	int a, b, c;
	clrscr();

	printf("Enter value of a: ");
	scanf("%d",&a);

	printf("Enter value of b: ");
	scanf("%d",&b);

	c = a * b;
	b = c / b;
	a = c / a;

	printf("After swap, value of a: %d \n",a);
	printf("After swap, value of b: %d \n",b);

	getch();
}