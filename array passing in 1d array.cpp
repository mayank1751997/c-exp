#include<stdio.h>
void func(int a[]);
int main()
{
	int i,arr[5] = {1,2,5,4,8};
	func(arr);
	printf("inside main(): ");
	for(i=0;i<5;i++)
	printf("%d",arr[i]);
	return 0;
	}
	void func(int a[])
	{
		int i;
		printf("inside func(): ");
		for(i=0;i<5;i++)
	{
		a[i] = a[i]+2;
		printf("%d",a[i]);
	}
	printf("\n");
}
