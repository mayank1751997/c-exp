#include<stdio.h>
#include<math.h>
int isprime(int n);
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(isprime(num))
	printf("enter the prime number\n");
	else
	printf("enter the number is not prime");
	return 0;
}
isprime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0)
	return 0;
	return 1;
}
