#include<stdio.h>
int reverse(int n);
int main()
{
	int number;
	printf("enter the number");
	scanf("%d",&number);
	printf("%d\n reverse(number)");
	return 0;
}
int reverse (int n)
{
	int rev=0;
	do
	{
		rev=rev*10+n%10;
		n/=10;
	}while(n>0);
		return rev;
}
