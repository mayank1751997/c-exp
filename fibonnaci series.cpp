#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,t1=0,t2=1,nextTerm;
	printf("enter the number");
	scanf("%d",&n);
	printf("fibonnaci series ");
	for(i=1;i<=n;++i)
	{
	printf("%d  ", t1);
	nextTerm = t1+t2;
	t1 = t2;
	t2 = nextTerm;
	}
	return 0;
}
