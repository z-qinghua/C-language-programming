#include<stdio.h>
#include<math.h>
int main()
{
	long int a,n;
	scanf("%ld%ld",&a,&n);
	if((abs(a)<=1000000)&&(n>=1&&n<=10000)) 
	printf("%.0lf",pow(a,n));
	return 0;
}
