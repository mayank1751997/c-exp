#include<stdio.h>
#define row 3
#define col 4
int main()
{
	int a[row][col],b[row][col],i,j;
	printf("enter the matrix a(%dx%d) row-wise\n" row,col);
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	b[i][j] = a[i][j];
	printf("transpose matrix\n");
		for(i=0;i<row;i++)
	{
	for(j=0;j<col;j++)
	printf("%5d",b[i][j]);
	printf("\n");
	}
	return 0;
	}
