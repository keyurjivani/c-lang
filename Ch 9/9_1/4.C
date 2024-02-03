#include<conio.h>
#include<stdio.h>
main()
{
	int a=1,n;
	clrscr();

	printf("Enter number: ");
	scanf("%d",&n);

	while(n >= a)
	{
		if(n%2==1)
		{
			printf("%d\n",n);
		}
		n--;
	}

	getch();
}