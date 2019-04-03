#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a[3],i,j,cols;
	printf("enter the number of coloums :");
	scanf("%d",&cols);
	for(i=0;i<3;i++)
	a[i] = (int *)malloc(sizeof(int));
	for(i=0;i<3;i++)
		for(j=0;j<cols;j++)
	{
	printf("enter the value for a[%d][%d] :",i,j);
	scanf("%d",&a[i][j]);
	}
	printf("the matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<cols;j++)
		printf("%5d",a[i][j]);
		printf("\n");
		}
		for(i=0;i<3;i++)
		free (a[i]);
		return 0;
}
