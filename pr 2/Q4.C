
#include<stdio.h>
#include<conio.h>
main()
{
	char c;
	clrscr();

	printf("s. sunday\n");
	printf("m. monday\n");
	printf("t. Tuesday\n");
	printf("w. wednesday\n");
	printf("th. Thursday\n");
	printf("f. friday\n");
	printf("sa. saturday\n") ;

	printf("choice day and enter first letter: ");
	scanf("%c",&c);

	switch(c)
	{
		case 's':
		case 'S':

			printf("Sunday");
			break;

		case 'm':
		case 'M':
			printf("Monday");
			break;
		case 't':
		case 'T':
			printf("Thuesday");
			break;

		case 'w':
		case 'W':
			printf("Wednesday");
			break;
		case 'th':
		case 'TH':
			printf("Thursday");
			break;
		case 'f':
		case 'F':
			printf("friday");
			break;
		case 'sa':
		case 'SA':
			printf("saturday");
			break;
		default:
			printf("no include day");
			break;
	}
	getch();
}
