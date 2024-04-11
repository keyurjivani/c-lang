#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,row,col;
	float avg;
	

	
	printf("Enter Number Of row: ");
	scanf("%d",&row);
	printf("Enter Number Of row: ");
	scanf("%d",&col);
	
	int a[row][col] , b[row][col] , sum[row][col];


	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			printf("sum: %d",sum[i][j]);
		}
	
	}
	
	avg = (sum / (row*col));
	printf("%d",avg);

}
