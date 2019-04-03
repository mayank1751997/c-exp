#include<stdio.h>
void func(double f[] ,int *i, char c[5]);
int main()
{
	int d;
	double d_arr[5] = {4,6,3,6,2};
	int i_arr[5] = {1,2,3,4,5};
	char c_arr[5] =  {'a','e','i','o','u'};
	printf("inside main() :");
	printf("sizeof(d_arr)  %u\t",sizeof(d_arr));
	printf("sizeof(i_arr)  %u\t",sizeof(i_arr));
	printf("sizeof(c_arr)  %u\n",sizeof(c_arr));
	printf("%p%p%p\n",d_arr,i_arr,c_arr);
	func(d_arr,i_arr,c_arr);
	return 0;
}
void func(int f[] , int *i,char c[5])
{
	int d;
		printf("inside main() :");
	printf("sizeof(d)  %u\t",sizeof(d));
	printf("sizeof(i)  %u\t",sizeof(i));
	printf("sizeof(c)  %u\n",sizeof(c));
	printf("%p%p%p\n",d,i,c);
	
	}	
