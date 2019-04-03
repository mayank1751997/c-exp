#include<stdio.h>
#include<math.h>
int main()
{
	int base,result,exponent;
	printf("enter the base");
	scanf("%d",&base);
	printf("enter the exponent");
	scanf("%d",&exponent);
	result = pow(base,exponent);
	printf("%d^*%d = %d",base,exponent,result);
	return 0;
}
