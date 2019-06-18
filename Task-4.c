#include<stdio.h>
#include<conio.h>
void main()
{
	char fname[10],lname[10];
	printf("Enter your first name");
	gets(fname);
	printf("\nEnter your last name");
	gets(lname);
	printf("\nYour full name is:%s %s",fname,lname);
}
