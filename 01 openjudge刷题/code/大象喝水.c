#include<stdio.h> 
#define pi 3.14159
int main()
{
	int h,r,num;
	float v;
	scanf("%d%d",&h,&r);
	v=pi*r*r*h;
	num=20*1000/v+1;
	printf("%d",num);
	return 0;
	
}
