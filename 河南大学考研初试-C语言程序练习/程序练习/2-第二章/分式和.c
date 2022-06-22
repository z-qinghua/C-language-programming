//求1-1/2+1/3-1/4+....+1/99-1/100

/*
1-注意分数数据类型 
*/ 

#include<stdio.h>
#define NUM 100
int main(){
	float sum=0,i,flag=-1;//
	for(i=1;i<=NUM;i++){
		flag=flag*(-1);
		sum=sum+(flag*(1/i)) ;//假设i设置为int型数据时，1/i在i为1时结果为1，i>1时表达式结果为0 
	}
	printf("数值和为：%f\n",sum);
	return 0;
}
