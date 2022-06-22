#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,newnum=0;
	scanf("%lld",&n);
	if(abs(n)<=1000000000){
		while(n){
			newnum=newnum*10+n%10;
			n=n/10;	
		}
		printf("%lld",newnum);
	}
	return 0;
}
