#include<stdio.h>
long int binary(int num);
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	printf("decimal=%d,binary=%d\n",num,binary(num));
	return 0;
}
long int binary(int num)
{
	int a=1,bin=0,rem;
	while(num>0)
	{
		rem=num%2;
		bin=bin+rem*a;
		num/=2;
		a*=10;
		}
		return bin;
}
