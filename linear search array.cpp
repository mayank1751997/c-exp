#include<stdio.h>
#define max 50
int linearsearch(int arr[],int n,int item);
int main()
{
	int i,n,item,arr[max],index;
	printf("enter the number of element");
	scanf("%d",&n);
	printf("enter the element\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter the item to be searched");
	scanf("%d",&item);
	index = linearsearch(arr,3n,item);
	if(index == -1)
	printf("%d is not found in array \n",item);
	else
	printf("% d found in position\n",item,index);
	return 0;
}

int linearsearch(int arr[],int n,int item){
	int i=0;
	while(i<n && item!=arr[i])
	i++;
	if(i<n)
	return i;
	else
	return -1;
}
