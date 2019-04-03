#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	printf("enter the character ");
	scanf("%c",&c);
	if((c>='a' && c<='z')||(c>='A' && c<='A'))
	printf("%c is an alphabate",c);
	else
	printf("%c is not alphabate",c);
	return 0;
	
}
