#include<stdio.h>
#include<math.h>
void printprimes(int num1,int num2);
int isprime(int n);
int main()
{
	int num1,num2;
	printf("enter the 2 number ");
	scanf("%d%d",&num1,&num2);
	printf("prime number between %d and %d are %d : ",num1,num2);
	printprimes(num1,num2);
	return 0;
	
}
void printprimes(int num1,int num2)
{
	int i;
	for(i=num1;i<=num2;i++)
	if(isprime(i))
	printf("%d",i);
	
}
int isprime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0)
	return 0;
	return 1;
}
