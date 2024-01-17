#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
	//int radius;
	float area, perimeter, radius;

	clrscr();
	printf("enter value of radius: ");
	scanf("%f",&radius);

	perimeter = 2 * pi * radius;
	printf("perimeter of the circle: %f inch\n\n",perimeter);

	area = pi * radius * radius;
	printf("area of circle: %f square inch\n",area);
	getch();
}
