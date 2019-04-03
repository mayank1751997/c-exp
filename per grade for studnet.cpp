#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,total,per;
	char grade;
	printf("enter the marks of the student");
	scanf("%d%d%d%d",&m1,&m2,&m3,&5m4);
	total = m1+m2+m3+m4;
	per = total/4;
	if(per>=85)
	grade = 'a';
	else if(per>=70)
	grade = 'b';
	else if(per>=55)
	grade = 'c';
	else if(per>=40)
	grade = 'd';
	else
	grade = 'e';
	printf("enter the condition grade is % c\n",grade,per);
	return 0 ;
}
