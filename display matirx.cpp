#include<stdio.h>
#define row 3
#define col 4
int main()
{
	int mat[row][col],i,j;
	printf("enter the element of the matrix row wise and coloum wise\n",row,col);
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	scanf("%d",&mat[i][j]);
	printf("enter the matrix\n");
	for(i=0;i<row;i++)
	{
	for(j=0;j<col;j++)
	printf("%5d",mat[i][j]);
	}
	printf("\n");
	return 0 ;
	}
