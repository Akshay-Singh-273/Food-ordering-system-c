//food ordering system
#include<stdio.h>
#include<conio.h>
#include<time.h>
struct abc{
				double total;
				int t,ch,i;
				int ftot[40];
				int order;
				};
	struct abc obj;
	
void delay(float number_of_seconds)
{
	int milliseconds=1000*number_of_seconds;
	clock_t start_time=clock();
	while(clock() < start_time + milliseconds);
}

void interface()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		printf("\t\t\t");
		for(j=1;j<=21;j++)
		{
			if(i==1||j==1||i==3||j==21)
			{
				printf("*  ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
		if(i<2)
		{
		printf("\t\t\t*\t\t\t   MENU\t\t\t\t    *\n");
		printf("\t\t\t*\tITEM\t\t\t\t\tPRICE\t    *");
		printf("\n\t\t\t*\t1. Non-Veg Burger\t\t       150.00\t    *\n\t\t\t*\t2. Veg Burger type-2\t\t\t80.00\t    *\n\t\t\t*\t3. Fries\t\t\t\t60.00\t    *\n\t\t\t*\t4. Coke\t\t\t\t\t40.00\t    *\n\t\t\t*\t5. Icecream\t\t\t\t60.00\t    *\n");
		}
		else 
		continue;
	}
}

void usrinput()
{
		switch (obj.order)
		{
			case 1:
			
				obj.total = obj.total+150.00;
					obj.ftot[obj.i]=obj.order;
				obj.i+=1;
				obj.t+=1;
				break;
			case 2:
				
				obj.total=obj.total+80.10;
					obj.ftot[obj.i]=obj.order;
				obj.i+=1;
				obj.t+=1;
				break;
			case 3:
			
				obj.total=obj.total+60.30;
					obj.ftot[obj.i]=obj.order;
				obj.i+=1;
				obj.t+=1;
				break;
			case 4:
				
				obj.total=obj.total+40.50;
					obj.ftot[obj.i]=obj.order;
				obj.i+=1;
				obj.t+=1;
				break;
			case 5:
			
			 	obj.total=obj.total+60.20;
			 		obj.ftot[obj.i]=obj.order;
				obj.i+=1;
				obj.t+=1;
				break;
			default:
				break;
			
			}
			
			
					
}

void dis()
{
	int l;
		for(l=0;l<=obj.t;l++)
				{
					switch (obj.ftot[l])
					{
						case 1:
							printf("\n  %d",l+1);		
							printf("\tNon-veg burger\t\t       150.00\t\t|");
							break;
						case 2:
							printf("\n  %d",l+1);	
							printf("\tVeg burger\t\t        80.10\t\t|");
							break;
						case 3:
							printf("\n  %d",l+1);		
							printf("\tfries\t\t\t        60.30\t\t|");
							break;
						case 4:
							printf("\n  %d",l+1);		
							printf("\tcoke\t\t\t        40.50\t\t|");
							break;
						case 5:
							printf("\n  %d",l+1);		
							printf("\ticecream\t\t        60.20\t\t|");
						 	break;
						default:
							continue;
					}
					
				
				}
}

void right_dis()
{
	int k;
	do
	{
		interface();
		printf("\t\t\t\t\t\t\t|");
		printf("\n\t\t\t\t\t\t\t|");
		printf("\n\t\t\t ORDER\t\t\t\t|\n");
		printf("\t-------------------------------------\t\t|\n");
		printf(" \tITEMS\t\t\t\tPRICE\t\t|\n");
		printf("\t\t\t\t\t\t\t|");
				printf("\n\t\t\t\t\t\t\t|\tType item number to add that item:\t");
				scanf("%d",&obj.order);
				printf("\t\t\t\t\t\t\t|");
				usrinput();
				dis();
					printf("\n\t\t\t\t\t\t\t|\n\t\t\t         total:%0.2f        \t|\n\t\t\t\t\t\t\t|\t",obj.total);
				printf("\n\t\t\t\t\t\t\t|\tTo add another item type any number\n \t\t\t\t\t\t\t|\t\t\tOR \n\t\t\t\t\t\t\t|\tproceed for checkout by pressing '0':\t");
				scanf("%d",&obj.ch);
				system("cls");
				
	}while(obj.ch!=0);
	printf("      ");
	for(k=1;k<=51;k++)
	{
		printf("--");
		delay(0.008);
	}
				
}


void output()						//Final order!
{	
	int k,credits,z;
	float gst;
	printf("\n\n\t\t\t\t\t\t:Final order:\n"
		   
		   "\t\t       ----------------------------------------------------------------"
		       	
		   "\n\t\t\tItem Code\t\tItems\t\t\t\tcost\n");
		for(k=1;k<=obj.t;k++)
		{	
			//printf("\tt=%d",obj.t);			//troubleshooting
		
		
			switch (obj.ftot[k])
			{
				case 1:
						printf("\n\t\t\t%d",k);	
					printf("\t\t\tNon-Veg Burger\t\t\t150.00");
					
					break;
				case 2:
						printf("\n\t\t\t%d",k);	
					printf("\t\t\tVeg Burger\t\t\t80.10");
					
					break;
				case 3:
						printf("\n\t\t\t%d",k);	
					printf("\t\t\tFries\t\t\t\t60.30");
					
					break;
				case 4:
						printf("\n\t\t\t%d",k);	
					printf("\t\t\tCoke\t\t\t\t40.50");
					
					break;
				case 5:
						printf("\n\t\t\t%d",k);	
					printf("\t\t\tIcecream\t\t\t60.20");
					
					break;
				default:
					continue;
			}
		
		}	
			printf("\n\t\t       ");
			for(z=1;z<=64;z++)
			{
				printf("-");
				delay(0.01);
			}
			gst = obj.total*18/100;
			printf("\n\t\t\tTotal ammount excluding GST\t\t\t\t%0.2f",obj.total);
			printf("\n\t\t\tGST ammount\t\t\t\t\t\t%0.2f",gst);
			obj.total+=gst;
			printf("\n\t\t       ");
			for(z=1;z<=64;z++)
			{
				printf("-");
				delay(0.01);
			}
			printf("\n\t\t\tTotal:\t\t\t\t\t\t\t%0.2f",obj.total);
			printf("\n\t\t       ");
			for(z=1;z<=64;z++)
			{
				printf("-");
				delay(0.01);
			}
}
	
	void interface();
	void dis();
	void right_dis();
	void usrinput();
	void output();

void main()
{		
	right_dis();
	output();
	system("pause");
	
}
