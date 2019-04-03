#include<stdio.h>
int main()
{
	int a;
	long b;
	long long c;
	double e;
	long double f;
	
	printf("size of int = %id bytes\n",sizeof(a));
	printf("size of long = %id bytes\n",sizeof(b));
	printf("size of long long = %id bytes\n",sizeof(c));
	printf("size of double = %id bytes\n",sizeof(e));
	printf("size of long double = %id bytes\n",sizeof(f));
	return 0;
}
