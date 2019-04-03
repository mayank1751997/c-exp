#include<stdio.h>
#include<conio.h>
int main()
{
	int n,t1 =0,t2 =1,nextTerm;
	printf("enter the number ");
	scanf("%d",&n);
	printf("fibonnaci series %d %d ",t1,t2);
	nextTerm = t1 + t2;
	while(nextTerm<=n)
{
	printf("%d, ",nextTerm);
	t1=t2;
	t2=nextTerm;
	nextTerm = t1+t2;
}
	return 0;
}
