struct fast
{
	float famt;
	float amt2;
	int n;
}f;
int fastcash()
{
	struct fast f;
	int ch,z;
	float bal,l;
	FILE *fp;
	fp=fopen("D:/c programs/final c project/deposit11.txt","r");
	fscanf(fp,"%f",&f.amt2);
	bal=f.amt2;
	remove("deposit11.txt");
	fclose(fp);
	printf("\n\t\t\t\t\tplease select the following domination:");
	printf("\n\t\t\t\t\t1.100 notes");
	printf("\n\t\t\t\t\t2.200 notes");
	printf("\n\t\t\t\t\t3.500 notes");
	printf("\n\t\t\t\t\t4.2000 notes");
	printf("\n\t\t\t\t\tplease select the following domination:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
				printf("\n\t\t\t\t\tEnter the notes:");
				scanf("%d",&f.n);
				z=f.n*100;
				if(z<bal)
				{
				f.famt=bal-f.n*100;
				fp=fopen("D:/c programs/final c project/deposit11.txt","w");
				l=f.famt;
				fprintf(fp,"%f",l);
				fclose(fp);
				break;
				}
				else
				printf("\n\t\t\t\t\tinsufficent balance");
				break;
				
		case 2:
				printf("\n\t\t\t\t\tEnter the notes:");
				scanf("%d",&f.n);
				if(f.n*200<bal)
				{
				f.famt=bal-f.n*200;
				fp=fopen("D:/c programs/final c project/deposit11.txt","w");
				l=f.famt;
				fprintf(fp,"%f",l);
				fclose(fp);
				}
				else
				printf("\n\t\t\t\t\tinsufficent balance");
				break;
				
		case 3:
				printf("\n\t\t\t\t\tEnter the notes:");
				scanf("%d",&f.n);
				if(f.n*500<bal)
				{
				f.famt=bal-f.n*500;
				fp=fopen("D:/c programs/final c project/deposit11.txt","w");
				l=f.famt;
				fprintf(fp,"%f",l);
				fclose(fp);
				}
				else
				printf("\n\t\t\t\t\tinsufficent balance");
				break;
		case 4:
				printf("\n\t\t\t\t\tEnter the notes:");
				scanf("%d",&f.n);
				if(f.n*2000<bal)
				{
				f.famt=bal-f.n*2000;
				fp=fopen("D:/c programs/final c project/deposit11.txt","w");
				l=f.famt;
				fprintf(fp,"%f",l);
				fclose(fp);
				}
				else
				printf("\n\t\t\t\t\tinsufficent balance");
				break;
				
	}
}