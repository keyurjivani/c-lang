#include<stdio.h>
#include<conio.h>
main()
{
	int a, b;
	clrscr();

	printf("Enter the number of a:\t ");
	scanf("%d",&a);

	printf("Enter the number of b:\t ");
	scanf("%d",&b);

	if(a < b)
	{
		printf("%d is minimum number",a);
	}
	else
	{
		printf("%d is minimum number",b);
	}
	getch();
}