#include<stdio.h>
int func(int n,int base);
int main()
{
	int num,base,result;
	char choice;
	printf("enter b for binary or o for octal ");
	scanf("%c",&choice);
	printf("enter a number");
	scanf("%d",&num);
	base = (choice=='b')?2 :8;
	result = func(num,base);
	printf("decimal number id %d \n",result);
	return 0;
	}
	int func(int n,int base)
	{
		int rem,d,j=0,dec=0;
		while(n>0)
		{
			rem = n%10;
			d=rem*j;
			dec+=d;
			j*=base;
			n/=10;
		}
		return dec;
	}
