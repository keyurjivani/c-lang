#include<stdio.h>
#include<conio.h>
main()
{
	int n, rem, mul=1, sum=0;
	clrscr();
	printf("Enter any number: ");
	scanf("%d",&n);

	while(n!=0)
	{
		rem = n % 10;
		mul = mul * rem;
		sum = sum + rem;
		n = n / 10;
	}
	if(sum == mul)
	{
		printf("this number is magic");
	}
	else
	{
		printf("this number is not magic");
	}
	getch();
}