//输入一个整数，转化为字符串输出

/*
1-采用递归会简单些 
*/ 


#include<stdio.h>
void change(int n){
	if(n/10==0){
		printf("转化后字符串为：%c",n%10+'0');
	}
	else{
		change(n/10) ;
		printf("%c",n%10+'0');	//此输出语句不可少，否则只输出最高位对应字符 
	}
 		
	
	
}
int main(){
	int n;
	while(1){  //让程序可以一直运行 
		printf("\n输入一个整数：");
		scanf("%d",&n); 
		if(n<0)
			puts("重新输入"); 
		else{
			change(n);	
		}
		
	}
	return 0;
}
