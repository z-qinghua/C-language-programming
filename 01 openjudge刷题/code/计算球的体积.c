#include<stdio.h>
#define pi 3.14
int main()
{
	double r,v;
	scanf("%lf",&r);
	v=4/3.0*pi*r*r*r;//这里4/3取得的值为整型，但是最终需要得到一个浮点数，所以写成4/3.0使得结果为浮点数，以便得到最终的正确结果 
	printf("%.2lf",v);	
	return 0;
}
