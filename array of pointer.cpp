#include<stdio.h>
int main()
{
	int i,arr[4]= {5,10,15,20};
	int *pa[4];
	for(i=0;i<4;i++)
	pa[i] = &arr[i];
	for(i=0;i<4;i++)
	{
	printf("pa[%d] = %p\t",i,pa[i]);
	printf("*pa[%d] = %d\t",i,*pa[i]);		
	}
	return 0;
}
