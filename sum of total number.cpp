#include<stdio.h>
int main()
{
	int n,sum=0,rem;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		rem = n%10;
		sum += rem;
		n /=10;
	}
	printf("sum of number=%d\n",sum);
	return 0;
}
