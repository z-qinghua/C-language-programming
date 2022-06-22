#include<stdio.h>
int f(int n)
{
	int t=0,a=5;
	if(n/2)
		{
			int a=6;t+=a++;
		}
	else {
		int a=7;t+=a++;
	}
//	printf("%3d",a);
	return t+a++;
	
 }
 
void main()
{
	int s=0,i=0;
	for(;i<2;i++)
		s+=f(i);
	printf("%d\n",s);
}
