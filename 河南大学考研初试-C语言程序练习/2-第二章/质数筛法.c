//����ɸѡ

/* 
1-����: ָ�ڴ���1����Ȼ���У�����1�����������ⲻ����������������Ȼ����
2-ֻ���ж������Ƿ�Ϊ���� 
3-�õ��������洢��һ�������� 
*/ 

//Q������n�����������n������������

#include<stdio.h>
#include<string.h>

#define max 100 
int main(){
	int n,i,num;
	int IsPrime[max],ptr=0;
	puts("����һ����������");
	scanf("%d",&n);
	IsPrime[ptr++]=2;
	
	for(num=3;num<=n;num+=2){//ֻ�ж������Ƿ�Ϊ���� 
		for(i=2;i<num;i++){
			if(num%i==0)		//�ܱ������Ĳ������� 
				break;
		}
		if(i==num)			//�����Ҳδ����������ӵ������� 
			IsPrime[ptr++]=num;
	}
	printf("%d���ڵ�����Ϊ:",n);
	for(i=0;i<ptr;i++){
		printf("%d\t",IsPrime[i]);
	}
	printf("\n��������Ϊ��%d",ptr); 
	return 0;
} 
