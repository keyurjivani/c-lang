#include<stdio.h>
#include<conio.h>
main()
{
	int unit;
	int bill, charge = 0, total = 0;
	clrscr();

	printf("Enter electicity units: ");
	scanf("%d",&unit);

	if(unit <= 50)
	{
		total = unit * 0.50;
		printf("enter unit: %d",total);
	}
	else if(unit >= 51 || unit <= 150)
	{
		total = 50 * 0.50 + (unit - 50) * 0.75;
		printf("Enter unit: %d",total);
	}
	else if(unit >= 151 && unit <= 250)
	{
		total = 50 * 0.50 + 100 * 0.75 + (unit -150) * 1.20;
	       printf("Enter unit: %d",total);
	}
	else if(unit >= 251)
	{
		total = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit -250) * 1.50;
		printf("Enter unit: %d",total);
	}

	charge = total * 20 /100;
	total = total + charge;
	printf("\nBill : %d",total);
	getch();
}
