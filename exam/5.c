#include<stdio.h>
struct laptop{
	char name[20];
	int processor;
	int price;
};
void main()
{
	int n,i;
	printf("Enter NO of laptop: ");
	scanf("%d",&n);

	
	struct laptop lap[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter laptop name: ");
		scanf("%s",&lap[i].name);
		printf("Enter Processor: ");
		scanf("%d",&lap[i].processor);
		printf("enter price: ");
		scanf("%d",&lap[i].price);
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter laptop name: %s\n",lap[i].name);
		printf("Enter Processor: %d\n",lap[i].processor);
		printf("enter price: %d\n",lap[i].price);
	
	}
}
