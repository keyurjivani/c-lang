#include<stdio.h>
#include<conio.h>
main()
{
	int salary, HRA, DA, TA, total;
	clrscr();

	printf("Enter your salary: ");
	scanf("%d",&salary);

	HRA = salary * 10 / 100;
	DA = salary * 5 / 100;
	TA = salary * 8 / 100;
	total = salary + HRA + DA + TA;

	printf("Value of HRA: %d \n",HRA);
	printf("Value of DA: %d \n",DA);
	printf("Value of TA: %d \n",TA);
	printf("Value of total salary: %d \n",total);

	getch();
}