#include<stdio.h>
#include<ctype.h>
int main()
{
	char x;
	printf("enter the alphabate");
	x = getchar();
	if(islower(x))
	putchar(toupper(x));
	else
	putchar(tolower(x));
	}
