#include<stdio.h>
#define max 100
int main()
{
	int arr[max],i,j,n,temp,min;
	printf("enter the number of element");
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("enter element\n",i+1);
			scanf("%d",arr[i]);
		}
		for(i=0;i<n-1;i++)
		{
			min=1;
			for(j=i+1;j<n;j++)
			{
				if(arr[min>arr[j]])
				min=j;
			}
			if(i!=min)
		{
			temp = arr[i];
			arr[i] = arr[min];
			arr[min]= temp;
		}
		}
		printf("sorted list is\n");
		for(i=0;i<n;i++)
		printf("%d",&arr[i]);
		printf("\n");
		return 0;
		}
