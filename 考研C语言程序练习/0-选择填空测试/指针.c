#include<stdio.h>
void fun(int *p,int *q)
{
	int t;
	t=*p;*p=*q;*q=t;
	*q=*p;
}
void main()
{
	int a=0,b=9;
	fun(&a,&b);
	printf("%d%d",a,b);
 } 
