struct depos
{
	float amt3;
	float amt2;
};
int deposit()
{
	struct depos d;
	float k,l;
	FILE *fp;
	printf("\n\t\t\t\t\tEnter the amount you want to deposit:");
	scanf("%f",&d.amt3);
	fp=fopen("D:/c programs/final c project/deposit11.txt","r");
	fscanf(fp,"%f",&d.amt2);
	k=d.amt2;
	remove("deposit11.txt");
	fclose(fp);
	fp=fopen("D:/c programs/final c project/deposit11.txt","w");
	l=k+d.amt3;
	fprintf(fp,"%f",l);
	fclose(fp);
	return l;
}