#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
	float radius, area;
	clrscr();
	printf("enter the raduis of the circle: ");
	scanf("%f",&radius);

	area = pi*radius*radius;

	printf("the area of the circle id : %f",area);
	getch();
}