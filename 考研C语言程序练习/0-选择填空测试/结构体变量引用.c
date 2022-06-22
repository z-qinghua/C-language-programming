#include<stdio.h>
void main()
{
	struct st
	{
		int x;int *y;
	}*pt;
	int a[]={1,2},b[]={3,4};
	struct st c[2]={10,a,20,b};
	pt=c; 
	printf("%d\n%d",++pt->x,*pt->y);
}
