#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n=11;
	
	for(i=1; i<=5; i++)
	{
		for(j=1;j<=i; j++)
		{
			printf(" %d",n);
			n += 11;
		}
		printf("\n");
	}
}
