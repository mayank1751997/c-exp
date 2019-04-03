#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum = 0;
	printf("enter the total number of integer");
	scanf("%d",&n);
	for(i=0;i<=n;++i)
	{
		sum += i;
	}
	printf("sum=%d",sum);
	return 0;
}
