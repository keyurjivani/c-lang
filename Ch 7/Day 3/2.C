#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();

	printf("Enter 1. English\n");
	printf("Enter 2. Hindi\n");
	printf("Enter 3. Gujarati\n");

	printf("Display Choice One: \n");
	scanf("%d",&a);

	switch(a)
		{
			case 1:
				printf("\n1.English\n");
				printf("press 1 for Internet Recharge\n");
				printf("press 2 for Top-Up Recharge\n");
				printf("press 3 for special Recharge\n");

				printf("Press key: ");
				scanf("%d",&a);

				switch(a)
					{
						case 1:
							printf("successful your recharge and enjoy");
							break;
						case 2:
							printf("successful your recharge and enjoy");
							break;
						case 3:
							printf("successful! Enjoy your timesuccessful your recharge and enjoy");
							break;

						default:
							printf("No responds");
					}
					break;

			case 2:
				printf("\n2.Hindi\n");
				printf("Internet Recharge ke liye 1 dabaiye\n");
				printf("Top-Up Recharge ke liye 2 dabaiye\n");
				printf("special Recharge ke liye 3 dabaiye\n");

				printf("Press key: ");
				scanf("%d",&a);

				switch(a)
					{
						case 1:
							printf("Aapka safaltapurvak Internet Recharge kar liye he");
							break;
						case 2:
							printf("Aapka safaltapurvak Top-Up Recharge kar liye he");
							break;
						case 3:
							printf("Aapka safaltapurvak Special Recharge kar liye he");
							break;
						default:
							printf("No responds");
					}
					break;

			case 3:
				printf("\n3.Gujarati\n");
				printf("Internet Recharge mate 1 dabavo\n");
				printf("Top-Up Recharge mate 2 dabavo\n");
				printf("special Recharge mate 3 dabavo\n");

				printf("Press key: ");
				scanf("%d",&a);

				switch(a)
					{
						case 1:
							printf("Tame safaltapurvak Internet Recharge karyu chhe\n");
							break;
						case 2:
							printf("Tame safaltapurvak Top-up recharge chhe\n");
							break;
						case 3:
							printf("Tame safaltapurvak Special Racharge karyu chhe\n");
							break;
						default:
							printf("No responds");
					}
					break;
			default:
				printf("no recharge");

		}


	getch();
}