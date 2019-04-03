#include<stdio.h>
int main()
{
	int arr[5] = {10,20,30,40,50};
	int i;
	for(i=0;i<10;i++)
	{
		printf("enter the value [%d] = %d\t",i,*(arr+i));
		printf("address of arr[%d] = %p\n",i,arr+i);
	}
	return 0;
}
