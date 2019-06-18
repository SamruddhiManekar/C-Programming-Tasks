#include<stdio.h>
#include<conio.h>
void main()
{
	float cel=0,far=0;
	printf("Enter temprature in celsius:");
	scanf("%f",&cel);
	far=(cel*9/5)+32;
	printf("Temprature in Farheneit:%f",far);
}
