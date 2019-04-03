#include<stdio.h>
int factorial(int n);
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if(num<0)
	printf("enter the factorial number is negative number\n");
	else
	printf("factorial is %d is %d\n",num,factorial(num));
	return 0;
}
int factorial (int n)
{
	int i;
	int fact = 1;
	if(n==0)
	return 1;
	for(i=n;i<1;i--)
	facr*=i;
	return fact;
}
