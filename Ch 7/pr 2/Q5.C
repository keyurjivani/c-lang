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
		total = (unit * 0.50)+unit ;
		printf("enter unit: %d",total);
	}
	else if(unit >= 51 || unit <= 150)
	{
		total = (unit * 0.75)+ unit ;
		printf("Enter unit: %d",total);
	}
	else if(unit >= 151 || unit <= 250)
	{
		total = (unit * 1.20)+ unit ;
	       printf("Enter unit: %d",total);
	}
	else if(unit >= 251)
	{
		total = (unit * 1.50) + unit;
		printf("Enter unit: %d",total);
	}

	//charge = total * 20 /100;
	//total = total + charge;
	//printf("Bill : %d",total);
	getch();
}
