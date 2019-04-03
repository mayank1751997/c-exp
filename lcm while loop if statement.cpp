#include<stdio.h>
#include<conio.h>
int main()
{
	/*minmultiple = a*/
	int n1,n2,a;
	printf("enter the two positive number ");
	scanf("%d %d",&n1,&n2);
	a = (n1>n2) ? n1 : n2;
	while(1)
	{
		if(a%n1==0 && a%n2==0)
		{
			printf("the lcm of %d and %d is %d ",n1,n2,a);
			break;
			}
			++a;
			}
			return 0;
}
