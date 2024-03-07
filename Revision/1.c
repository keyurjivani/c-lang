//D E F G H I
//J K L M N
//O P Q R
//S T U 
//V W
//X


#include<stdio.h>
main(){
	char c = 'D';
	int i,j;
	for(i=0; i<6; i++)
	{
		for(j=i; j<6; j++)
		{
			printf("%c",c);
			c++;
		}
		printf("\n");
	}
}
