#include<stdio.h>
int main() {
	unsigned int n;
	int count=0;
	scanf("%d",&n);
	while(n!=1){
		if(n%2==0){
			n=n/2;
			count++;
		}else if(n%2!=0){
			n=(3*n+1)/2;
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
