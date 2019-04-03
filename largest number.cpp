#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,n3;
	printf("enter the three number");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>=n2 && n1>=n3)
	printf("%d largest number",n1);
	if(n2>=n3 && n2>=n3)
	printf("%d largest number",n2);
	if(n3>=n1 && n3>=n2)
	printf("%d largest number",n3);
	return 0;
}
