#include<stdio.h>
int main()
{
	int a,b=0,c,d;
	printf("enter the interger");
	scanf("%d",&a);
	d=a;
	while(a!=0)
	{
		c=a%10;
		b = b*10+c;
		a /=10;
	}
	if(d==b)
	printf("%d is a palindrome ",d);
	else
	printf("%d id a not palindrome ",d);
	return 0;
	}
