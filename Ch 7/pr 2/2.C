#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("Enter value of n: ");
	scanf("%d",&n);


	(n%2==0)
		? printf("%d is even")
		: printf("%d is odd")	;
	getch();

}