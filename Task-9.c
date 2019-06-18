#include<stdio.h>
#include<conio.h>
void main()
{
	int fac=1,n,i;
	printf("Enter any no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("The factorial of a number is:%d",fac);
}
