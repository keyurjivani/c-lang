#include<stdio.h>
void main()
{
	char name[10];
	int math;
	int eng;
	int guj;
	int com;
	int sport;
	int i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++){
	printf("Enter name: ");
	scanf("%[^\n]",&name);
	fflush(stdin);
	printf("Enter Marks of math: ");
	scanf("%d",&math);
	printf("Enter Marks of eng: ");
	scanf("%d",&eng);
	printf("Enter Marks of guj: ");
	scanf("%d",&guj);
	printf("Enter Marks of com: ");
	scanf("%d",&com);
	printf("Enter Marks of sport: ");
	scanf("%d",&sport);
	}
	
	for(i=0;i<n;i++)
	{
		sum = math+guj+com+eng+sport;
	}
	printf("")
	

	
}
