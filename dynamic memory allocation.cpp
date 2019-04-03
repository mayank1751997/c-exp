#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("enter the number of integers to be enterded  :");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("memory are avilable\n");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("enter the integer :");
		scanf("%d",p+1);
	}
	for(i=0;i<n;i++)
	printf("%d\t",*(p+1));
	return 0;
}
