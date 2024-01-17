#include<stdio.h>
#include<conio.h>
void main()
{
	float b,h,area;
	clrscr();
	printf("Enter the value of b: ");
	scanf("%f",&b);
	printf("Enter the value of h: ");
	scanf("%f",&h);
	area = (b*h)/2;
	printf("\n\n area of triangle is: %f",area);
	getch();
}