#include <stdio.h>
void cube(int a); //function define

void main()
{
	int a;
	
	printf("enter no: ");
	scanf("%d",&a);
	
	cube(a*a*a); // calling
	
}
void cube(int a)
{
	printf("answer %d",a); // declare
}
