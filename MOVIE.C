#include<stdio.h>
int main()
{
	int n, tickets=299, combo=151;
	int mno;
	char pname[15];
	clrscr();
	printf("Enter your name: ");
	scanf("%s",pname);
	printf("Enter Mobile no: ");
	scanf("%d",&mno);





	printf("Movie Industry Type In India\n");
	printf("Enter 1. Hollywood\n");
	printf("Enter 2. Bollywood\n");
	printf("Enter 3. Cartoon\n");
	printf("Enter 4. Onther\n");

	printf("\nChoice One Movie And Enjoy: ");
	scanf("%d",&n);


	switch(n)
	{
		//Hollywood
		case 1:
			printf("1...Hollywood\n\n");
			printf("::- 1.Horror\n");
			printf("::- 2.Science fiction\n");
			printf("::- 3.Romance\n");


			printf("\nselect movie type: ");
			scanf("%d",&n);

			//movie book switch case
			switch(n)
			{
				case 1:
					printf("::- 1.select one Horror movie\n");
					printf("1.1 Hostel\n");
					printf("1.2 Annabelle\n");
					printf("1.3 Hereditary\n");

					printf("\n..select one Horror movie.. ");
					scanf("%d",&n);

					// Cinema switch case
					switch(n)
					{
						case 1:
							printf("\nBook you movie: Hostel");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");

							printf("Select Cinema... ");
							scanf("%d",&n);
							//
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");

									printf("Select combo..");
									scanf("%d",&n);

									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Hostel\n");
											printf("Category:- Horror \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));


											break;

										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Hostel\n");
											printf("Category:- Horror \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;
									}
									break;

								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");

									printf("Select combo..");
									scanf("%d",&n);

									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Hostel\n");
											printf("Category:- Horror \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));


											break;

										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Hostel\n");
											printf("Category:- Horror \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;
									}
									break;
							}
							break;

						case 2:
							printf("\nBook you movie: Annabelle\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");

							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");

									printf("Select combo..");
									scanf("%d",&n);

									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Annabelle\n");
											printf("Category:- Horror \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));


											break;

										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Annabelle\n");
											printf("Category:- Horror \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;
									}
									break;

								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");

									printf("Select combo..");
									scanf("%d",&n);

									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Annabelle\n");
											printf("Category:- Horror \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));


											break;

										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Annabelle\n");
											printf("Category:- Horror \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;
									}
									break;
							}
							break;



						case 3:
							printf("\nBook you movie: Hereditary\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");

							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");

									printf("Select combo..");
									scanf("%d",&n);

									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Hereditary\n");
											printf("Category:- Horror \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));


											break;

										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Hereditary\n");
											printf("Category:- Horror \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Hereditary\n");
											printf("Category:- Horror \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Hereditary\n");
											printf("Category:- Horror \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
					}
					break;
					//................................
				case 2:
					printf("::- 2.select one Science fiction movie\n");
					printf("2.1 Cowboys & Aliens\n");
					printf("2.2 Interstellar\n");
					printf("2.3 Alien\n");
					
					printf("\n..select one Horror movie.. ");
					scanf("%d",&n);
					
					// Cinema switch case
					switch(n)
					{
						case 1:
							printf("\nBook you movie: Cowboys & Aliens");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							//
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Cowboys & Aliens\n");
											printf("Category:- Science Fiction \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Cowboys & Aliens\n");
											printf("Category:- Science Fiction \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Cowboys & Aliens\n");
											printf("Category:- Science Fiction \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Cowboys & Aliens\n");
											printf("Category:- Science Fiction \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
							
						case 2:
							printf("\nBook you movie: Interstellar \n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Interstellar\n");
											printf("Category:- Science Fiction \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Interstellar\n");
											printf("Category:- Science Fiction \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Interstellar\n");
											printf("Category:- Science Fiction \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Interstellar\n");
											printf("Category:- Science Fiction \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
						
						
							
						case 3:
							printf("Book you movie: Alien\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Alien\n");
											printf("Category:- Science Fiction \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Alien\n");
											printf("Category:- Science Fiction \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Alien\n");
											printf("Category:- Science Fiction \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Alien\n");
											printf("Category:- Science Fiction \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
					}
					break;
				//	
				case 3:
					printf("::- 3.select one Rommance movie\n");
					printf("3.1 Titanic\n");
					printf("3.2 Pride & Prejudice\n");
					printf("3.3 Twilight\n");
					
					printf("\n..select one Rommance movie.. ");
					scanf("%d",&n);
					
					// Cinema switch case
					switch(n)
					{
						case 1:
							printf("\nBook you movie: Titanic");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							//
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Titanic\n");
											printf("Category:- Rommance \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Titanic\n");
											printf("Category:- Rommance \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Titanic\n");
											printf("Category:- Rommance \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Titanic\n");
											printf("Category:- Rommance \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
							
						case 2:
							printf("\nBook you movie: Pride & Prejudice\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Pride & Prejudice\n");
											printf("Category:- Rommance \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Pride & Prejudice\n");
											printf("Category:- Rommance \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Pride & Prejudice\n");
											printf("Category:- Rommance \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Pride & Prejudice\n");
											printf("Category:- Rommance \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
						
						
							
						case 3:
							printf("\nBook you movie: Twilight\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Twilight\n");
											printf("Category:- Rommance \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Twilight\n");
											printf("Category:- Rommance \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Twilight\n");
											printf("Category:- Rommance \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Twilight\n");
											printf("Category:- Rommance \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
					}
					break;
			}
			break;
		//Bollywood	
		case 2:
			printf("1...Bollywood\n\n");
			printf("::- 1.action\n");
			printf("::- 2.comedy\n");
			printf("::- 3.drama\n");
			
			
			printf("\nselect movie type: ");
			scanf("%d",&n);
			
			//movie book switch case 
			switch(n)
			{
				case 1:
					printf("::- 1.select one Horror action\n");
					printf("1.1 War\n");
					printf("1.2 Baby\n");
					printf("1.3 RRR\n");
					
					printf("\n..select one Horror movie.. ");
					scanf("%d",&n);
					
					// Cinema switch case
					switch(n)
					{
						case 1:
							printf("\nBook you movie: War");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							//
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- War\n");
											printf("Category:- Action \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- War\n");
											printf("Category:- Action \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- War\n");
											printf("Category:- Action \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- War\n");
											printf("Category:- Action \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
							
						case 2:
							printf("\nBook you movie: Baby\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Baby\n");
											printf("Category:- Action \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Baby\n");
											printf("Category:- Action \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Baby\n");
											printf("Category:- Action \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Baby\n");
											printf("Category:- Action \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
						
						
							
						case 3:
							printf("\nBook you movie: RRR\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- RRR\n");
											printf("Category:- Action \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- RRR\n");
											printf("Category:- Action \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- RRR\n");
											printf("Category:- Action \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- RRR\n");
											printf("Category:- Action \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
					}
					break;
					//................................
				case 2:
					printf("::- 2.select one Comedy movie\n");
					printf("2.1 Housefull\n");
					printf("2.2 Cirkus\n");
					printf("2.3 Welcome\n");
					
					printf("\n..select one Horror movie.. ");
					scanf("%d",&n);
					
					// Cinema switch case
					switch(n)
					{
						case 1:
							printf("\nBook you movie: Housefull");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							//
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Housefull\n");
											printf("Category:- Comedy \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Housefull\n");
											printf("Category:- Comedy \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Housefull\n");
											printf("Category:- Comedy \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Housefull\n");
											printf("Category:- Comedy \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
							
						case 2:
							printf("\nBook you movie: Cirkus \n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Cirkus\n");
											printf("Category:- Comedy \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Cirkus\n");
											printf("Category:- Comedy  \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Cirkus\n");
											printf("Category:- Comedy  \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Cirkus\n");
											printf("Category:- Comedy  \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
						
						
							
						case 3:
							printf("Book you movie: Welcome\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Welcome\n");
											printf("Category:- Comedy  \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Welcome\n");
											printf("Category:- Comedy  \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Welcome\n");
											printf("Category:- Comedy  \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Welcome\n");
											printf("Category:- Comedy  \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
					}
					break;
				//	
				case 3:
					printf("::- 3.select one Drama movie\n");
					printf("3.1 Patiala House\n");
					printf("3.2 Freddy  \n");
					printf("3.3 12th Fail\n");
					
					printf("\n..select one Drama movie.. ");
					scanf("%d",&n);
					
					// Cinema switch case
					switch(n)
					{
						case 1:
							printf("\nBook you movie: Patiala House");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							//
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Patiala House\n");
											printf("Category:- Drama \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Patiala House\n");
											printf("Category:- Drama \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Patiala House\n");
											printf("Category:- Drama \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Patiala House\n");
											printf("Category:- Drama \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
							
						case 2:
							printf("\nBook you movie: Freddy\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Freddy\n");
											printf("Category:- Drama \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Freddy\n");
											printf("Category:- Drama \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Freddy\n");
											printf("Category:- Drama \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Freddy\n");
											printf("Category:- Drama \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
						
						
							
						case 3:
							printf("\nBook you movie: 12th Fail\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- 12th Fail\n");
											printf("Category:- Drama \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- 12th Fail\n");
											printf("Category:- Drama \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- 12th Fail\n");
											printf("Category:- Drama \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- 12th Fail\n");
											printf("Category:- Drama \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
					}
					break;
			}
			break;
		
		//Cartoon	
		case 3:
			printf("1...Cartoon\n\n");
			printf("::- 1. Animation\n");
			printf("::- 2. Stop motion\n");
			printf("::- 3. 3D animation\n");
			
			
			printf("\nselect movie type: ");
			scanf("%d",&n);
			
			//movie book switch case 
			switch(n)
			{
				case 1:
					printf("::- 1.select one Animation movie\n");
					printf("1.1 Daffy Duck\n");
					printf("1.2 Toad\n");
					printf("1.3 Thumper\n");
					
					printf("\n..select one Animation movie.. ");
					scanf("%d",&n);
					
					// Cinema switch case
					switch(n)
					{
						case 1:
							printf("\nBook you movie: Daffy Duck");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							//
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Daffy Duck\n");
											printf("Category:- Animation \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Daffy Duck\n");
											printf("Category:- Animation \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Daffy Duck\n");
											printf("Category:- Animation \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Daffy Duck\n");
											printf("Category:- Animation \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
							
						case 2:
							printf("\nBook you movie: Remy\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Remy\n");
											printf("Category:- Animation \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Remy\n");
											printf("Category:- Animation \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Remy\n");
											printf("Category:- Animation \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Remy\n");
											printf("Category:- Animation \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
						
						
							
						case 3:
							printf("\nBook you movie: Maui\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Maui\n");
											printf("Category:- Animation \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Maui\n");
											printf("Category:- Animation \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Maui\n");
											printf("Category:- Animation \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Maui\n");
											printf("Category:- Animation \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
					}
					break;
					//................................
				case 2:
					printf("::- 2.select one Stop Motion movie\n");
					printf("2.1 Mickey Mouse\n");
					printf("2.2 Coraline\n");
					printf("2.3 Buzz Lightyear\n");
					
					printf("\n..select one Stop Motion movie.. ");
					scanf("%d",&n);
					
					// Cinema switch case
					switch(n)
					{
						case 1:
							printf("\nBook you movie: Mickey Mouse");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							//
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Mickey Mouse\n");
											printf("Category:- Stop Motion \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Mickey Mouse\n");
											printf("Category:- Stop Motion \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Mickey Mouse\n");
											printf("Category:- Stop Motion \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Mickey Mouse\n");
											printf("Category:- Stop Motion \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
							
						case 2:
							printf("\nBook you movie: Coraline \n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Coraline\n");
											printf("Category:- Stop Motion \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Coraline\n");
											printf("Category:- Stop Motion \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Coraline\n");
											printf("Category:- Stop Motion  \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Coraline\n");
											printf("Category:- Stop Motion \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
						
						
							
						case 3:
							printf("Book you movie: Buzz Lightyear\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Buzz Lightyear\n");
											printf("Category:- Stop Moiton  \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Buzz Lightyear\n");
											printf("Category:- Stop Motion  \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Buzz Lightyear\n");
											printf("Category:- Stop Motion  \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Buzz Lightyear\n");
											printf("Category:- Stop Motion  \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
					}
					break;
				//	
				case 3:
					printf("::- 3.select one 3D Animation movie\n");
					printf("3.1 Ice Age\n");
					printf("3.2 Finding Nemo\n");
					printf("3.3 Kung Fu Panda\n");
					
					printf("\n..select one 3D Animation movie.. ");
					scanf("%d",&n);
					
					// Cinema switch case
					switch(n)
					{
						case 1:
							printf("\nBook you movie:  Ice Age");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							//
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Ice Age\n");
											printf("Category:- 3D Animation \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Ice Age\n");
											printf("Category:- 3D Aniation \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Ice Age\n");
											printf("Category:- 3D Animation \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Ice Age\n");
											printf("Category:- 3D Animation \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
							
						case 2:
							printf("\nBook you movie: Finding Nemo\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Finding Nemo\n");
											printf("Category:- 3D Animation \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Finding Nemo\n");
											printf("Category:- 3D Animation \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Finding Nemo\n");
											printf("Category:- 3D Animation \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Finding Nemo\n");
											printf("Category:- 3D Animation \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
						
						
							
						case 3:
							printf("\nBook you movie: Kung Fu Panda\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Kung Fu Panda\n");
											printf("Category:- 3D Animation \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Kung Fu Panda\n");
											printf("Category:- 3D Animation \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Kung Fu Panda\n");
											printf("Category:- 3D Animation \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Kung Fu Panda\n");
											printf("Category:- 3D Animation \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
					}
					break;
			}
			break;
		//Onther
		case 4:
			printf("4...Cartoon\n\n");
			printf("::- 1. 	Tollywood\n");
			printf("::- 2. 	Jollywood\n");
			printf("::- 3. 	Chhollywood\n");
			
			
			printf("\nselect movie type: ");
			scanf("%d",&n);
			
			//movie book switch case 
			switch(n)
			{
				case 1:
					printf("::- 1.select one Tollywood movie\n");
					printf("1.1 Devil\n");
					printf("1.2 Kushi\n");
					printf("1.3 Rangasthalam\n");
					
					printf("\n..select one Tollywood movie.. ");
					scanf("%d",&n);
					
					// Cinema switch case
					switch(n)
					{
						case 1:
							printf("\nBook you movie: Devil");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							//
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Devil\n");
											printf("Category:- Tollywood \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Devil\n");
											printf("Category:- Tollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Devil\n");
											printf("Category:- Tollywood \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Devil\n");
											printf("Category:- Tollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
							
						case 2:
							printf("\nBook you movie: Kushi\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Kushi\n");
											printf("Category:- Tollywood \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Kushi\n");
											printf("Category:- Tollywood \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Kushi\n");
											printf("Category:- Tollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Kushi\n");
											printf("Category:- Tollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
						
						
							
						case 3:
							printf("\nBook you movie: Maui\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Kushi\n");
											printf("Category:- Tollywood \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Kushi\n");
											printf("Category:- Tollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Kushi\n");
											printf("Category:- Tollywood \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Kushi\n");
											printf("Category:- Tollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
					}
					break;
					//................................
				case 2:
					printf("::- 2.select one Jollywood  movie\n");
					printf("2.1 Ratnakar \n");
					printf("2.2 Joymoti\n");
					printf("2.3 Bahniman \n");
					
					printf("\n..select one Jollywood movie.. ");
					scanf("%d",&n);
					
					// Cinema switch case
					switch(n)
					{
						case 1:
							printf("\nBook you movie:  Ratnakar");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							//
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Ratnakar\n");
											printf("Category:- Jollywood \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Ratnakar\n");
											printf("Category:- Jollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Ratnakar\n");
											printf("Category:- Jollywood \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Ratnakar\n");
											printf("Category:- Jollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
							
						case 2:
							printf("\nBook you movie: Joymati \n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Joymati\n");
											printf("Category:- Jollywood \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Joymati\n");
											printf("Category:- Jollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Joymati\n");
											printf("Category:- Jollywood  \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Joymati\n");
											printf("Category:- Jollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
						
						
							
						case 3:
							printf("Book you movie: Bahiman\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Bahiman\n");
											printf("Category:- Jollywood  \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Bahiman\n");
											printf("Category:- Jollywood  \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Bahiman\n");
											printf("Category:- Jollywood  \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Bahiman\n");
											printf("Category:- Jollywood  \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
					}
					break;
				//	
				case 3:
					printf("::- 3.select one Chhollywood movie\n");
					printf("3.1 Bhulan the Maze\n");
					printf("3.2 Rangobati\n");
					printf("3.3 Prem Yuddh\n");
					
					printf("\n..select one Chhollywood movie.. ");
					scanf("%d",&n);
					
					// Cinema switch case
					switch(n)
					{
						case 1:
							printf("\nBook you movie:  Bhulan the Maze");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							//
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Bhulan the Maze\n");
											printf("Category:- Chhollywood \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Bhulan the Maze\n");
											printf("Category:- Chhollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Bhulan the Maze\n");
											printf("Category:- Chhollywood \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Bhulan the Maze\n");
											printf("Category:- Chhollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
							
						case 2:
							printf("\nBook you movie: Rangobati\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Rangobati\n");
											printf("Category:- Chhollywood \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Rangobati\n");
											printf("Category:- Chhollywood \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;
									
								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Rangobati\n");
											printf("Category:- Chhollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Rangobati\n");
											printf("Category:- Chhollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;	
									}
									break;	
							}
							break;
						
						
							
						case 3:
							printf("\nBook you movie: Prem Yuddh\n");
							printf("This Show In cinema\n");
							printf("1..Rajhans\n");
							printf("2..Cinepolis\n");
							
							printf("Select Cinema... ");
							scanf("%d",&n);
							switch(n)
							{
								case 1:
									printf("\nbook Tickets In Rajhans.\n");
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");
									
									printf("Select combo..");
									scanf("%d",&n);
									
									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Prem Yuddh\n");
											printf("Category:- Chhollywood \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											
											
											break;
										
										case 2:
											printf("\nCinema:- Cinepolis.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Prem Yuddh\n");
											printf("Category:- Chhollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;
									}
									break;

								case 2:
									printf("book Tickets In Cinepolis.\n");
									// combo switch case
									printf("\ncomboes..\n");
									printf("1.Chifs & Cocacola.\n");
									printf("2.Popcorn & Cocacola.\n");

									printf("Select combo..");
									scanf("%d",&n);

									switch(n)
									{
										case 1:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Prem Yuddh\n");
											printf("Category:- Chhollywood \n");
											printf("combo:- Chifs & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));


											break;

										case 2:
											printf("\nCinema:- Rajhans.\n");
											printf("name:- %s\n",pname);
											printf("mobile no:- %d\n",mno);
											printf("Book you movie:- Prem Yuddh\n");
											printf("Category:- Chhollywood \n");
											printf("combo:- Popcorn & Cocacola.\n");
											printf("Tickets Price:- %d\n",tickets);
											printf("Combo Price:- %d\n",combo);
											printf("Tickets Price + GST(20%) + Combo: %d\n",tickets+combo+(tickets*20/100));
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		default:
			printf("Today no show");
	}
	getch();
}
