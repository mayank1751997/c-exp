#include<stdio.h>
#define max 100 
int main()
{
	int n,arr[max],i,j,temp,c,xchanges;
	printf("enter the number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element %d",i+1);
		scanf("%d",arr[i]);
		}
		for(i=0;i<n-1;i++)
	{
		xchanges = 0;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[i];
				arr[i] = arr[j+1];
				arr[j+1] = temp;
				xchanges++;
			} 
		}
		if(xchanges == 0)
		break;
}
		printf("sorted list\n");
			for(i=0;i<n;i++)
			printf("%d",arr[j]);
			printf("\n");
			return 0;
	}
