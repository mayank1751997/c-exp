#include<stdio.h>
int main()
{
	int a=12;
	float b=1.2;
	int *p1=&a;
	float *p2 = &b;
	printf("value of p1 = address of a = %p\n",p1);
	printf("value of p2 = address of a = %p\n",p2);
	printf("address of a = %p\n",&p1);
	printf("address of a = %p\n",&p1);
	printf("value of a = %d %d %d\n",*p1 ,*(&a));
	printf("value of b = %lf%lf%lf\n",b,*p2, *(&b));
	return 0;
}
