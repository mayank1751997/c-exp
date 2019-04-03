/*#include<stdio.h>
int main()
{
	int arr[5] = {5,10,15,20,25};
	int i,*p;
	p=arr;
	for(i=0;i<5;i++)
	{
		printf("address of the arr [%d] = %p%p%p%p\n",arr[i],arr+i,p+1,&p[i]);
		printf("valur of the arr[%d] = %d%d%d%d",i,arr[i],*(arr+i),*(p+i),p[i]);
	}
	return 0;
	
}*/
/*#include<stdio.h>
int main()
{
	int *p;
	int (*ptr)[5];
	int arr[5];
	p = arr;
	ptr = &arr;
	printf("p=%p,ptr=%p\n",p,ptr);
	p++;
	ptr++;
	printf("p=%p,ptr=%p\n",p,ptr);
	return 0 ;
	}*/

#include<stdio.h>
void value(int x ,int y);
int main()
{
	int a = 5,b = 8;
	printf("a=%d,b=%d\n",a,b);
	value(a,b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
void value(int x,int y)
{
x++;
y++;
printf("a=%d,b=%d\n",x,y); 	  	
	}	
