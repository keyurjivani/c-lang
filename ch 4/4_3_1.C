#include<stdio.h>
#include<conio.h>
main()
{
	float c,f;
	clrscr();

	printf("Enter the value of c(degrees celsius): ");
	scanf("%f",&c);

	f = ( c * 9 / 5 ) + 32;

	printf("The temperature in fahrenheit: %f",f);

	getch();
}
