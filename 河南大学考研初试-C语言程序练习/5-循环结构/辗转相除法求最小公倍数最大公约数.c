//辗转相除法
//输入n和m，输出n和m的最大公约数和最小公倍数：


#include<stdio.h>

int main(){
	int n,m,r,p;
	int temp;
	

while(1){	//要实现程序不中断的连续判断，输入语句需要放进循环中，否则会陷入死循环 
	//输入数值
	scanf("%d%d",&n,&m);
	//判断两数大小，大数做被除数
	if(n<=m){
		temp=m;
		m=n;
		n=temp;
	}
	p=m*n;
	
	//求最大公约数,辗转相除法 
	while(1){
		r=n%m;
		if(r!=0){
			n=m;
			m=r;
		}
		else 
			break;
	}
	printf("最大公约数：%d\n",m);
	printf("最小公倍数：%d\n",p/m);//原始m*n值除以最大公约数就是最小公倍数 
	
}	
	
	return 0;
	 
}



