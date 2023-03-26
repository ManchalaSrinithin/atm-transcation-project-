#include<stdio.h>
#include<time.h>
#include"deposit.c"
#include"pinwrong.c"
#include"withdraw.c"
#include"fastcash.c"
#include"pinchange.c"
#include"transfer.c"
#include"balance.c"
#include"tpins.c"
struct bank 
{
	float amt1;
}b;
int main()
{
	struct bank b;
	int k,cn,choice,p,h,pin,count=0,bal=5000,r;
	time_t mytime;
	mytime = time(NULL);
	printf("\n\t\t\t\t\tWELCOME TO STATE BANK OF INDIA");
	printf("\n\t\t\t\t\t_______________________________");
	printf("\n\t\t\t\t\t\\_/|\\_/|\\_/|\\_/|\\_/|\\_/|\\_/|\\_/");
	printf("\n\n\t\t\t\t\t PLEASE INSERT YOUR CARD...");
	printf("\n\n\t===================================================================================");
	do 
	{
	r=tpins();
			if(r==1)
			{  
			printf("\n\t\t\t\t\t\t\t\t\tEnter 1 to continue:");
			scanf("%d",&cn);
			if(cn==1)
			{
			printf("\n\t\tHELLO-SRI NITHIN");
			printf("\n\t\tYOUR PIN IS CONFIDENTIAL");
			printf("\n\t\tNOBODY SHOULD SEE YOUR PIN");
			printf("\n\t\tWHILE YOUR ENTERING IT.");
			printf("\n\t\tMAKE YOU PIN MORE SECURE BY");
			printf("\n\t\tFREQUENTLY CHAGING YOUR PIN");
		do
		{
			printf("\n\t===================================================================================");
			printf("\n\n\t\t\t\t\tSTATE BANK OF INDIA");
			printf("\n\t\t\t\t\t~~~~~ ~~~~ ~~ ~~~~~");
			printf("\n");
			printf("\n\n\t\t1.DEPOSIT\t\t\t\t\t2.FASTCASH");
			printf("\n\n\t\t3.TRANSFER\t\t\t\t\t4.CASH WITHDRAWAL");
			printf("\n\n\t\t5.PINCHANGE\t\t\t\t\t6.BALANCE ENQUIRY");
			printf("\n\n\t\tPlease Enter the choice:");
			scanf("%d",&choice);
				switch(choice)
				{
				case 1:
				deposit();
				break;
				case 2:
				fastcash();
				break;
				case 3:
				transfer();
				break;
				case 4:
				b.amt1=withdraw();
				break;
				case 5:
				pinchange();
				printf("\n\n\t\tYour pin has successfully changed");
				break; 
				case 6:
				b.amt1=balance();
				printf("\n\n\t\tcurrent balance in the account:%f",b.amt1);
				break;  
				default:
				 	printf("\n\n\t\tINVALID CHOICE!!!");
				break;
			}
			printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
			printf("\n\n\t\tPress 2 to return the main menu");
			scanf("%d",&p);
	}while(p==2);
}
}
		if(r==0)
		{
		h=wrong();
		count++;
		printf("count:%d",count);	
		if(count==3)
		{
			printf("\n\n\t\t\t\t\tPIN LIMIT REACHED!!!!");
			printf("\n\n\t\t\t\t\tYour Account was blocked for next 24 hours");
			printf("\n\n\t\t\t\t\tFor more information kindly visit your nearest bank");
			printf("\n\t===================================================================================");
			break;
		}
		}
		if(cn!=1)
		{
			printf("\n\n\t\t\t\t\tplease choose the correct option....");
		}
		printf("\n\n\t\t\t\t\tThank you for using atm service");
		printf(ctime(&mytime));
		printf("\n\t#####################################################################################");
}while(h==1);
return 0;
}
