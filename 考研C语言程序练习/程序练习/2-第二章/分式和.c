//��1-1/2+1/3-1/4+....+1/99-1/100

/*
1-ע������������� 
*/ 

#include<stdio.h>
#define NUM 100
int main(){
	float sum=0,i,flag=-1;//
	for(i=1;i<=NUM;i++){
		flag=flag*(-1);
		sum=sum+(flag*(1/i)) ;//����i����Ϊint������ʱ��1/i��iΪ1ʱ���Ϊ1��i>1ʱ���ʽ���Ϊ0 
	}
	printf("��ֵ��Ϊ��%f\n",sum);
	return 0;
}
