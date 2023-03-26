struct bank1 
{
	float amt;
	float amt3;
	long long int baccno;
	
}b1;
int transfer()
{
	struct bank1 b1;
	float l2,k1,k2;
	FILE *fp;
	int c1=0,k,k4;
	float bamt;
	do
	{
	if(k==1)
	{
	c1=0;	
	}
	printf("\n\n\t\tEnter the Receivers Bank Account Number:");
	scanf("%lld",&b1.baccno);
	while(b1.baccno!=0)
	{
		b1.baccno=b1.baccno/10;
		c1++;
	}
	printf("\n\n\t\tNumber of digits in the entered A/C.NO is:%d",c1);
	if(c1!=16)
	{
	printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\n\t\tplease reenter your account number correctly");
	printf("\n\n\t\tEnter 1 to continue:");
	scanf("%d",&k);
	}
	if(c1==16)
	{	
	printf("\n\n\t\tEnter the amount to be debited");
	scanf("%f",&b1.amt);
	fp=fopen("D:/c programs/final c project/deposit11.txt","r");
	fscanf(fp,"%f",&b1.amt3);
	k1=b1.amt3;
	remove("deposit11.txt");
	fclose(fp);
	if(b1.amt>k1)
	{	
	printf("\n\n\t\tInsufficient balance");
	}
	else
	{
	fp=fopen("D:/c programs/final c project/deposit11.txt","w");
	k2=b1.amt*0.025+b1.amt;
	bamt=k1-k2;
	fprintf(fp,"%f",bamt);
	fclose(fp);
	printf("\n\n\t\tA CGST AND SGST TAX OF 2.5 % PERCENTAGE IS DETECTED ON TOTAL AMOUNT DEPOSITED");	
	}
	printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}
}while(k==1);
}