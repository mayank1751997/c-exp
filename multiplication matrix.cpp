#include<stdio.h>
#define row 3
#define col 4
#define row2 col1
#define col2
int main()
{
	int i,j,k,a[row1][col1],b[row2][col2],c[row1][col2];
	printf("enter the matix a(%dx%d) row-wise\n",row1,col1);
	for(i=0;i<row1;i++)
	for(j=0;j<col1;j++)
	scanf("%d",&a[i][j]);
	printf("enter the matix b(%dx%d) row-wise\n",row2,col2);
	for(i=0;i<row2;i++)
	for(j=0;j<col2;j++)
	scanf("%d",&b[i][j]);
	
	for(i=0;i<row1;i++)
	for(j=0;j<col2;j++)
	{
		c[i][j] =0 ;
		for(k=0;k<col1;k++)
	c[i][j] += a[i][j] * b[i][j];
		
	}
	printf("enter the resultant matrix c\n");
		printf("enter the matix a(%dx%d) row-wise\n");
		for(i=0;i<row;i++)
	{
	for(j=0;j<col;j++)
	printf("%5d",c[i][j]);
	printf("\n");	
}
return 0;
	}
