//�ù�ʽ����/4��=1-1/3+1/5-1/7+...�󦰽���ֵ��ֱ��ĳһ�����ֵС��10^6 

#include<stdio.h>
#include<math.h>


int main(){
	double PI,num=0,i;
	int flag=-1;
	for(i=1;fabs(flag*(1/i))>=1e-6;i+=2){
		flag=flag*(-1);
		num+=flag*(1/i);
	}
	PI=num*4;
	printf("%10.8f",PI);
	return 0;
} 
