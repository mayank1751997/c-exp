#include<stdio.h>
#include<math.h>
void type(float a,float b,float c);
void area(float a,float b,float c);
int main()
{
	float a,b,c,s;
	printf("enter the sides of triangle");
	scanf("%f%f%f",&a,&b,&c);
	if(a<b+c && b<c+a && c<a+b)
	{
		type(a,b,c);
		area(a,b,c);
		}
		else
		printf("triangle possible with these sides\n");
		return 0 ;
}
void type(float a,float b,float c)
{
if((a*a) + (b*b) == (c*c) || (b*b) + (c*c) == (a*a) || (c*c) + (a*a) == (b*b))
printf("enter the right angle");
if(a==b && b==c)
printf("isoscale triangle");
else if(a==b || b==c || c==a)
printf("enter the triangle");
else
printf("enter the triangle");
}
void area(float a,float b,float c)
{
	float s,area;
	s = (a+b+c) /2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle=%f\n",area);
	}
