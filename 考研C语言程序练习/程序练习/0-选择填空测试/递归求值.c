//递归求函数值

#include<stdio.h>

//递归函数

int total(int n){
	int c; 
	if(n==1)
		c=1;
	else 
		c=total(n-1)+n+1;
} 

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",total(n));
	return 0;
}
