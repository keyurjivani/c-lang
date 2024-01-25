#include<stdio.h>
#include<conio.h>
void main()
{       //create a program to print increment and decrement..
	int i = 15;
	int a = 20;
	int b = 10;
	clrscr();
	printf("create a program to print increment and decrement..\n\n");
	printf("** Increment value of a:  %d \n",++i);
	printf("** Decrement value of b:  %d \n",--i);
	printf("\n \n\n\n");

	//create a program and use arithmetic operator..
	printf("create a program and use arithmetic operator..\n\n");
	printf("a:  20\nb:  10\n");
	printf("** Addition of a and b :  %d \n",a+b);
	printf("** Subtraction of a and b :  %d \n",a-b);
	printf("** Muliplication of a and b :  %d \n",a*b);
	printf("** Division of a and b :  %d \n",a/b);
	printf("** Modues of a and b :  %d \n",a%b);


	getch();
}