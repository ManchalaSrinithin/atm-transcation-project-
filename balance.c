int balance()
{
	float amt3,k1;
	FILE *fp;
	fp=fopen("D:/c programs/final c project/deposit11.txt","r");
	fscanf(fp,"%f",&amt3);
	k1=amt3;
	fclose(fp);
	return k1;
}