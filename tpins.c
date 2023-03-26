int tpins()
{
	int pine,t1,j;
	FILE *fp;
	printf("\n\n\t\t\t\t\t Enter the pin:");
	scanf("%d",&pine);
	fp=fopen("D:/c programs/final c project/pins67.txt","r");
	fscanf(fp,"%d",&t1);
	if(pine==t1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}