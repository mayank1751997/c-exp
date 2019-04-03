#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter the values of data a and b");
	scanf("%d %d ", &a,&b);
	if(a<b)
	printf("%d is less than %d");
	if(a<=b)
	printf("%d is less than or equal to %d\n",a,b);
	if(a==b)
	printf("%d is equal to %d\n",a,b);
	if(a!=b)
	printf("%d is equal to %d\n",a,b);
	if(a>=b)
	printf("%d is greather than or equal to %d\n",a,b);
	return 0;
}
