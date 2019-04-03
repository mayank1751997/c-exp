#include<stdio.h>
int main()
{
	int n,count=0,rem;
	printf("enter the number");
	scanf("%d",&n);
	do
	{
		n/=10;
		count++;
	}while(n>0);
	printf("number of digits =%d\n",count);
	return 0;
	}
