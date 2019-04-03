#include<stdio.h>
void func(int (*a) [4]);
int main()
{
	int i,j,arr[3][4] = { {12,12,23,45},{78,21,55,41},{74,85,45,12}};
	printf("inside main : sizeof(arr) %u\n",sizeof(arr));
	func(arr);
	printf("enter the content after function are() :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d",arr[i][j]);
		printf("\n");
		}
		return 0;
}
void func(int (*a) [4])
{
	int i,j;
	printf("inside func() : sizeof(a) = %u\n",sizeof(a));
	printf("inside func() : sizeof(*a) = %u\n",sizeof(*a));
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	a[i][j] = a[i][j] + 2;
	
}

