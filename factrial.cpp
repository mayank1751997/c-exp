#include<stdio.h>
#include<conio.h>
int main()
{
	int c,n,factorial = 1;
	printf("enter the number of n\n");
	scanf("%d",&n);
	for(c = 1 ; c <= n ; c++)
	factorial = factorial * c;
	printf("enter the factorial number%d = %d\n",n,factorial);
	return 0;
}
