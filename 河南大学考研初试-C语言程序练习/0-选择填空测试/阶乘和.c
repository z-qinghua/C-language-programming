//±à³ÌÇó1£¡+2£¡+¡£¡£¡£+50£¡

#include<stdio.h>

int main(){
	double i,sum=0,n=1;
	for(i=1;i<=50;i++){
		n=n*i;
		sum=sum+n;
	}
	printf("%d",sum);
	
	return 0;
} 
