#include<stdio.h>
#include<conio.h>
void main()
{
	int choice=0;
	float far=0,cel=0;
	printf("Pick among the following:\n1.Celsius to Farheneit\n2.Farheneit to celsius\n3.Exit");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
				printf("Enter temprature in celsius:");
				scanf("%f",&cel);
				far=(cel*9/5)+32;
				printf("Temprature in Farheneit:%f",far);
				break;
		case 2:
				printf("Enter temprature in farheneit:");
				scanf("%f",&far);
				cel=5*(far-32)/9;
				printf("Temprature in Celsius:%f",cel);
				break;
		case 3:
				printf("Exit");
				break;
		default:printf("Exit");
	}
}
