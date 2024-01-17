#include<stdio.h>
#include<conio.h>
void main()
{
	int a = 12;
	int b = 6;
	int c;
	clrscr();
	c = a + b;
	printf("12 + 6\t : %d \n",c);
	c = a - b;
	printf("12 - 6\t : %d \n",c);
	c = a * b;
	printf("12 * 6\t : %d \n",c);
	c = a / b;
	printf("12 / 6\t : %d \n",c);
	c = a % b;
	printf("12 % 6\t : %d%d",c);
	//printf("%d",c);
	getch();
}