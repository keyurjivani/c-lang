#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();

	printf("Enter number of a: ");
	scanf("%d",&a);
	printf("Enter number of b: ");
	scanf("%d",&b);
	printf("Enter number of c: ");
	scanf("%d",&c);

	(a<b)
		? (a<c)
			? printf("a is min")
			: printf("c is min")
		: (b<c)
			? printf("b is min")
			: printf("c is min")
		;
	getch();

}