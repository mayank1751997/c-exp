#include<stdio.h>
int main()
{
	int n,reversednumber = 0,remainder;
	printf("enter the numremainderer");
	scanf("%d",&n);
	while(n!=0)
	{
		remainder=n%10;
		reversednumber=reversednumber*10+remainder;
		n /= 10;
	}
	printf("enter the reversednumber = %d ", reversednumber);
	return 0 ;
}
