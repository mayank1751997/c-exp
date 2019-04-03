#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	float avg;
	printf("enter the positive number\n");
	while(i<=10)
	{
		printf("enter number %d ",i);
		scanf("%d",&n);
		if(n<0)
		{
			printf("enter the positive number\n");
			continue ;
		}
		sum+=n;
		i++;
		}
		avg=sum/10.0;
		printf("sum=%d avg=%d\n",sum,avg);
		return 0;
}
