#include<stdio.h>
int main()
{
	int n,nsave,rem,d,j=1,dec=0;
	printf("enter the binary number");
	scanf("%d",&n);
	nsave = n;
	while(n>0)	
	{
	d=rem*j;
	rem=n%10;
	dec+=d;
	j*=2;
	n/=10;
}
printf("enter number =%d,dec =%d\n",nsave,dec);
return 0;
}
