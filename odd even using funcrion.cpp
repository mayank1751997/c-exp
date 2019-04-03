#include<stdio.h>
void find(int n);
int main()
{
	int number;
	printf("enter a number : ");
	scanf("%d",&number);
	find(number);
	return 0;
	}
void find(int n)
{
if(n%2==0)
printf("number is even\n",n);
else
printf("number is odd\n",n);
}
