#include<stdio.h>
#include<conio.h>
main()
{
	int n,i, num =0;
	clrscr();
	printf("Enter any number: ");
	scanf("%d",&n);

	for(i = 1; i <= n; i++)
	{
		num = num * 10 + 1;
		{
			printf("%d",num);
		}
		if(i != n)
		{
			printf(",");
		}
	}
	getch();
}