#include<stdio.h>
#include<conio.h>
void main()
{
	int no=0,rno;
	printf("Enter any number");
	scanf("%d",&no);
	while(no!=0)
	{
		rno=rno*10;
		rno=rno+no%10;
		no=no/10;
	}
	printf("Reverse of the number entered is:%d",rno);
}
