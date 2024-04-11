#include<stdio.h>
void main()
{
	int i,n,j;
	int a[i];
	printf("Enter Number Of n: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
			printf("a[%d]: ",i);
			scanf("%d",&a[i]);
	}
	printf("show element for input user..\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("odd No: %d\n",a[i]);
		}
	}
}
