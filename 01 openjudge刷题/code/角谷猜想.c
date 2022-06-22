#include<stdio.h> 
int main()
{
	long long int n;
	scanf("%lld",&n);
	if(n==1)
		printf("End");
	else if(n>0&&n<=2000000){
		do{
			if(n%2==0){
				printf("%lld/2=%lld\n",n,n/2);	
				n=n/2;
			}
			else{
				printf("%lld*3+%d=%lld\n",n,1,n*3+1);
				n=n*3+1;
			}			
		}while(n!=1);
		printf("End");	
	}
	return 0;
}
