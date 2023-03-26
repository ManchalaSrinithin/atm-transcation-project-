struct with
{
	float amt3;
	float amt2;
};
int withdraw()
{
	struct with d1;
	int l1;
	float k,l2;
	FILE *fp;
	printf("\n\t\t\t\t\tEnter the amount you want to withdraw:");
	scanf("%f",&d1.amt3);
	printf("\n\t\t\t\t\t\tEnter 2 to continue:");
	scanf("%d",&l1);
	fp=fopen("D:/c programs/final c project/deposit11.txt","r");
	fscanf(fp,"%f",&d1.amt2);
	k=d1.amt2;
	remove("deposit11.txt");
	fclose(fp);
	if(d1.amt3>k && l1==2)
	{
	printf("\n\t\t\t\t\tYOU DONT HAVE SUFFICIENT BALANCE ");
	}
	fp=fopen("D:/c programs/final c project/deposit11.txt","w");
	l2=k-d1.amt3;
	fprintf(fp,"%f",l2);
	fclose(fp);
	return l2;
}