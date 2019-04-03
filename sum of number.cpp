#include<stdio.h>
int main()
{
	int num,sum=0,n;
	do
	{
		printf("enter a number(enter 0 to stop)");
		scanf("%d",&num);
		sum+=num;
	}while(n!=0);
	printf("sum is %d\n",sum);
	return 0;
}
