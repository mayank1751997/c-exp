#include<stdio.h>
long int reverse(long int n);
int ispalindrome(long int num);
int main()
{
	long int num;
	printf("enter the number :  ");
	scanf("%ld",&num);
	if(ispalindrome(num))
	printf("number is palindrome\n");
	else
	printf("number is not palindrome\n");
	return 0;
	}
	int ispalindrome(long int num)
	{
		if(num==reverse(num))
		return 1;
		return 0;
	}
	long int reverse(long int n)
	{
		long int rev=0;
		do
		{
			rev=rev*10+n%10;
			n/=10;
			
		}while(n>0);
		return rev;
	}
