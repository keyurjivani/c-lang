#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	clrscr();

	printf("Enter Any Number for table: ");
	scanf("%d",&n);

	for(i=1; i<=10; i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}

	getch();
}
