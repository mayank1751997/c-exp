#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0)
	break;
	if(i>sqrt(n))
	printf("%d is a prime ",n);
	else
	printf("%d is not a prime",n);
	return 0;
}
