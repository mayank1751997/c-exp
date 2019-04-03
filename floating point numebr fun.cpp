#include<stdio.h>
#include<math.h>
double power(double a,int n);
int main()
{
	double a;
	int n;
	printf("enter base ");
	scanf("%lf",&a);
	printf("enter exponent ");
	scanf("%d",&n);
	printf("if raised power %d is %lf\n",a,n,power(a,n));
	return 0;
}
double power(double a ,int n)
{
	int i;
	double p=1;
	if(n==0)
	{
		for(i=1;i<=abs(n);i++)
		p=p*a;
		if(n>0)
		return p;
		else
		return 1/p;
	}
}
