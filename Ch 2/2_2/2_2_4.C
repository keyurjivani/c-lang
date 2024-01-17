#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,t,si;
	clrscr();
	printf("Enter value of p: ");
	scanf("%f",&p);
	printf("Enter value of r: ");
	scanf("%f",&r);
	printf("Enter value of t: ");
	scanf("%f",&t);
	si = (p*r*t)/100;
	printf("Answer of simple interest: %f",si);
	getch();
}
