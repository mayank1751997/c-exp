#include<stdio.h>
int main()
{
	int number,dig,sum;
	printf("enter the number");
	scanf("%d",&number);
	printf("%d->",number);
	do
	{
		sum = 0;
		while(number!=0)
		{
			dig=number%10;
			sum+=dig;
			number/=10;
			}
			printf("%d\t",sum);
			number=sum;
	}
	while(number/10!=0);
	return 0;
}
