#include<stdio.h>
#include<conio.h>
int main()
{
	int divident,divisor,quorient,remainder;
	printf("enter the divident");
	scanf("%d",&divident);
	printf("enter the divisor");
	scanf("%d",&divisor);
	quorient=divident/divisor;
	remainder=divident%divisor;
	printf("quorient=%d"\n,quorient);
	printf("remainder=%d",remainder);
	return 0;
}
