#include<stdio.h>
#define max 50
int binearysearch(int arr[],int size,int item);
int main()
{
	int i,size,item,arr[max],index;
	printf("enter the element");
	scanf("%d",&size);
	printf("enter the element in sorted list\n");
		for(i=0;i<size;i++)
		scanf("%d",arr[i]);
		printf("enter the item to be search : ");
		scanf("%d",&item);
		index = binearysearch(arr,size,item);
		if(index == -1)
		printf("not found in array\n",item);
		else
		printf("item found in array\n",item,index);
		return 0;
	}
	int binearysearch(int arr[],int size,int item)
	{
		int low = 0,up = size-1,mid;
		while(low<=up)
		{
			mid=(low+up);
			{
				mid = (low+up)/2;
				if(item > arr[mid])
				low = mid+1;
				else if(item < arr[mid])
				up = mid-1;
				else
				return mid;
		}
		return mid;
		}
		return -1;
	}
