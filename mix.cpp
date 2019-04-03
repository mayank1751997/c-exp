/*#include<stdio.h>
void convert()
int main()
{
	int num;
	printf("enter the positive number ");
	scanf("%d",&num);
	convert(num,2);					printf("\n");
	convert(num ,8);				printf("\n");
	convert(num,16);				printf("\n");
	return 0;
}
void convert(int num,int base)
{
	int rem = num%base;
	if(num==0)
	return 0 ;
	convert(num/base,base);
	if((rem<10);
	else
	printf("%c",rem-10+'A');
}

#include<stdio.h>
float power(float a,int n);
int main()
{
	float a,p;
	int n;
	printf("enter a and b");
	scanf("%f%d",&a,&b);
	p =  power(a,n)
	printf("%f is reised to power %d is %f\n",a,n,p);
	return 0;
}
float power()
{
	if(n==0)
	return 1;
	else
	return (a*power(a,n-1));
}

#include<stdio.h>
int fib(int n);
int main()
{
int nterms,i;
printf("enter the number of terms");
scanf("%d",&nterms);
for(i=0;i<nterms;i++)
printf("%d",fib(i));
printf("\n");
return 0 ;
}
int fib(int n)
{
if(n == 0 || n == 1)	
return 0 ;
return fib(fib(n-1) + fib(n-2));
}*/

