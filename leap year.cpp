#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%4 == 0)
	{
		if(year%100 == 0)
		{
			if(year%400 == 0)
			printf("%d is a leap year",year);
		else
		printf("%d is a not a leap year",year);
	}
	else
	printf("%d is a leap year",year);
}
else
printf("%d is a not a leap year",year);
return 0;
}
