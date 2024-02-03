#include<stdio.h>
#include<conio.h>
main()
{
	int unit;
	int bill, charge, total;
	clrscr();

	printf("Enter electicity units: ");
	scanf("%d",&unit);

	if(unit <= 50)
	{
		total = (unit * 0.50) ;
		printf("enter unit: %d",total);
	}
	else if(unit >= 51 || unit <= 150)
	{
		total = 25 + (unit - 50) * 0.75;
		printf("Enter unit: %d",total);
	}
	else if(unit >= 151 || unit <= 250)
	{
		total = 100 + (unit - 150) * 1.20;
	       printf("Enter unit: %d",total);
	}
	else if(unit >= 251)
	{
		total = 220 + (unit - 250) * 1.50;
		printf("Enter unit: %d",total);
	}


	charge = total * 0.2;
	bill = total + charge;
	printf("\nBill : %d",bill);
	getch();
}