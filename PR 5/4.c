#include<stdio.h>
main()
{
	int size,i,j;
	
	printf("Enter No Of Row: ");
	scanf("%d",&size);
	printf("Enter No Of Column: ");
	scanf("%d",&size);
	
	int arr[size][size];
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("Enter Element[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
		
	int row_no;
	printf("Enter Column No: ");
	scanf("%d",&row_no);
	
	for(j=0;j<size;j++)
	{
		printf("%d",arr[row_no][j]);
		printf(" , ");
	}
	
	int sumofrow=0;
	for(j=0;j<size;j++)
	{
		sumofrow += arr[row_no][j] ;
	}
	printf("\n The sum of a Column %d : %d\n",row_no, sumofrow);
	
	
	
	
	int col_no;
	printf("Enter Row No: ");
	scanf("%d",&col_no);
	
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i][col_no]);
		printf(" , ");
	}
	
	int sumofcol=0;
	for(i=0;i<size;i++)
	{
		sumofcol += arr[i][col_no] ;
	}
	printf("\n The sum of a row %d : %d\n",col_no, sumofcol);
}
