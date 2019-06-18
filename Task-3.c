#include<stdio.h>
#include<conio.h>
void main()
{
	int m1,m2,m3;
	float average=0;
	printf("Enter marks in 3 subjects:");
	scanf("%d%d%d",&m1,&m2,&m3);
	printf("\nThe total marks is:%d",m1+m2+m3);
	average=(m1+m2+m3)/3;
	printf("\nThe average is:%f",average);
}
