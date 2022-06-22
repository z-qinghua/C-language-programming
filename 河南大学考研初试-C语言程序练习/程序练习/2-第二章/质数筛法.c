//质数筛选

/* 
1-素数: 指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。
2-只用判断奇数是否为素数 
3-得到的素数存储在一个数组中 
*/ 

//Q：输入n，输出不大于n的素数及个数

#include<stdio.h>
#include<string.h>

#define max 100 
int main(){
	int n,i,num;
	int IsPrime[max],ptr=0;
	puts("输入一个正整数：");
	scanf("%d",&n);
	IsPrime[ptr++]=2;
	
	for(num=3;num<=n;num+=2){//只判断奇数是否为素数 
		for(i=2;i<num;i++){
			if(num%i==0)		//能被整除的不是素数 
				break;
		}
		if(i==num)			//到最后也未被整除的添加到数组中 
			IsPrime[ptr++]=num;
	}
	printf("%d以内的素数为:",n);
	for(i=0;i<ptr;i++){
		printf("%d\t",IsPrime[i]);
	}
	printf("\n素数个数为：%d",ptr); 
	return 0;
} 
