#include<stdio.h>
int cheak(int n);
int main()
{
	int arr[10],i;
	printf("enter the array element ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		cheak(arr[i]);
			}
			return 0;
	}
	int cheak(int n)
	{
		if(n%2==0)
		printf("%d is even\n",n);
		else
		printf("%d is odd\n",n);
	}
	
