#include<stdio.h>
int main()
{
	int i,arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int small,large;
	small = large = arr[10];
	for(i=i;i<10;i++)
	{
		if(arr[10] < small)
		small = arr[i];
		if(arr[10] > large)
		large = arr[i];
	}
	printf("enter the smallest = %d, largest = %d\n",small,large);
	return 0;
}
