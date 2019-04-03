#include<stdio.h>
#include<conio.h>
int main()
{
	int number;
	printf("enter number");
	scanf("%d",&number);
	if(number >0.0)
	printf("enter the positive number");
	else if(number <0.0)
	printf("enter the negative number");
	else
	printf("enter the number of choice");
	return 0;
}

