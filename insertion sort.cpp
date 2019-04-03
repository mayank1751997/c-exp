#include<stdio.h>
#define max 50
int main()
{
	int arr[max],i,j,k,n;
	printf("enter the array elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element %d",i+1);
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<n;i++)
	{
	k=arr[i];
	for(j=i-1;j>=0 && k<arr[i]; j--)
	arr[j+1] = arr[j];
	arr[j+1] = k;
	}
	printf("sorted list\n");
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	printf("\n");
	return 0;
	}
