#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,j,cols,rows;
	printf("enter the rows and coloums :");
	scanf("%d%d",&rows,&cols);
	a=(int **)malloc(rows*sizeof(int *));
	for(i=0;i<rows;i++)
	a[i]=(int *)malloc(cols*sizeof(int));
		for(i=0;i<rows,i++)
			for(j=0;j<cols,j++)
			{
				printf("enter a [%d][%d]",i,j);
				scanf("%d",&a[i][j]);
				}
				printf("the matrix is\n");
					for(i=0;i<rows,i++)
					{
							for(i=0;i<rows,i++)
							printf("%5d",a[i][j]);
							printf("\n");
					}
							for(i=0;i<rows,i++)
							free(a[i]);
							free(a);
							return 0;
	

}
