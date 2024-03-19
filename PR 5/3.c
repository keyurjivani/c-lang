#include<stdio.h>
main()
{
	int size,i,j;
	
	printf("Enter the array's row & column size: ");
	scanf("%d",&size);
	
	int arr[size][size];
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("Enter Array[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}	
}
