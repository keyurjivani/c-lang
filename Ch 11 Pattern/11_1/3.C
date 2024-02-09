#include <stdio.h>

main()
{
	int i,j;
	clrscr();
	for ( i = 5; i >= 1; i--)
	{

		for ( j = 0; j <= 5-i; j++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}

	getch();
}

