#include<stdio.h>
#define SIZE 10
int main()
{
	int arr[SIZE],i,even=0,odd=0;
	for(i=0;i<SIZE;i++)
	{
		printf("enter a value for arr[%d] : ",i);
		scanf("%d",&arr[i]);
		if(arr[i]%2 == 0)
		even ++;
		else
		odd++;
	}
	printf("even number = %d , odd number=%d\n",even,odd);
	return 0;
}
