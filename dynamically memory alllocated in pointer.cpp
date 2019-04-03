#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*p;
	printf("enter the number of integer to be entered");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("memory avaliable\n");
		exit(1);
		
	}
	for(i=0;i<n;i++)
	{
		printf("enter an integer : ");
		scanf("%d",&p[i]);
		}
		for(i=0;i<n;i++)
		printf("%d\t",p[i]);
		return 0;
		}

