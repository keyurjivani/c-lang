#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();

	printf("Enter the number: ");
	scanf("%d",&a);

	if(a > 0)
	{
		printf("This Number is positive.....%d",a);
	}
	else if(a < 0)
	{
		printf("This Number is Nagetive......%d",a);
	}
	else
	{
		printf("This Number is Neutral......%d",a);
	}

	getch();
}