#include<stdio.h>
int main()
{
	int x,y,a,b;
	printf("enter two number");
	scanf("%d%d",&x,&y);
	a=x;
	b=y;
	while(a!=b)
	{
		if(a<b)
		a=a+x;
		else
		b=b+y;
		}
		printf("lcm of %d and %d is %d\n",x,y,a);
		a=x;
		b=y;
		while(a!=b)
		{
			if(a>b)
			a=a-b;
			else
			b=b-a;
		}
		printf("hcf of %d and %d is %d\n",x,y,a);
		return 0;
}
