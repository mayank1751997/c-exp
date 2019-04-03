#include<stdio.h>
int main()
{
	int number;
	printf("enter the number : ");
	scanf("%d",&number);
	if(number<0)
	{
		printf("enter the number is negative\n");\
		number = number;
	}
	printf("enter the number is %d\n",number);
	return 0;
}
