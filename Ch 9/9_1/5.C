#include<stdio.h>
#include<conio.h>
main()
{
	int first, second;
	clrscr();

	printf("Enter first number: ");
	scanf("%d",&first);

	printf("Enter second number: ");
	scanf("%d",&second);

	while(first <= second)
	{
		if((first % 4 == 0 && first % 100 == 0) ||(first % 400 == 0))
		{
			printf("%d\n",first);
		}
		first++;
	}

	getch();
}