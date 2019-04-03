#include<stdio.h>
int main()
{
	int base,exponent;
	long long result=1;
	printf("enter the value of base");
	scanf("%d",&base);
	printf("enter the value of exponent");
	scanf("%d",&exponent);
	while (exponent != 0)
	{
		result *= base;
		--exponent;
	}
		printf("answer = %lld", result);
		return 0;
}
