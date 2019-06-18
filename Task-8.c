#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,pro=0;
	printf("Enter any number");
	scanf("%d",&n);
	printf("\nThe table is");
	for(i=1;i<11;i++)
	{
		pro=n*i;
		printf("\n%d*%d=%d",n,i,pro);
	}
}
