#include<stdio.h>
#include<conio.h>
void main()
{
	char name[20];
	int age=0;
	float no;
	printf("Enter your name");
	scanf("%s",&name);
	printf("Enter your age");
	scanf("%d",&age);
	printf("Enter your phone no");
	scanf("%f",&no);
	printf("Your name is:%s\nYour age is:%d\nYour phone no is:%f",name,age,no);
}
