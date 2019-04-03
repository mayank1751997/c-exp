#include<stdio.h>
int main(void)
{
	int i;
	float a[4] = {1.1,2.2,3.3,4.4};
	void *vp;
	vp = a;
	for(i=0;i<4;i++)
	{
		printf("%.lf\t", *(float *)vp);
		(float *) vp=(float *) vp+1 ;
	}
	printf("\n");
	return 0;
}
