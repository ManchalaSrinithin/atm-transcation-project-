struct pinc
{
	int newpin;
	int pre;
}p;
int pinchange()
{
	struct pinc p;
	int t1,k;
	int i,c=0;
	FILE *fp;
	printf("\n\n\t\tEnter your new pin:");
	scanf("%d",&p.newpin);
	k=p.newpin;
	do
	{
	while(p.newpin!=0)
	{
		p.newpin=p.newpin/10;
		c++;
	}
	printf("\n\n\t\tNumber of digits in the entered pin is:%d",c);
	if(c==4)
	{
	fp=fopen("D:/c programs/final c project/pins67.txt","r");
	fscanf(fp,"%d",&t1);
	remove("pins67.txt");
	fclose(fp);
	fp=fopen("D:/c programs/final c project/pins67.txt","w");
	fprintf(fp,"%d",k);
	fclose(fp);
	}
	else
	{
		printf("\n\n\t\tYour new pin must contain only 4 digits");
		printf("\n\n\t\tEnter 5 to reenter you pin");
		scanf("%d",&p.pre);
	}
	}while(p.pre==5);
}