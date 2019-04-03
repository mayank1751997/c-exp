#include<stdio.h>
int main()
{
	int i,n,term=1,sum=0;
	printf("enter number of terms :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{
	sum+=term;
	term=term+1;
}
printf("enter the number of series %d\n",n,sum);
return 0;
}


