//շת�����
//����n��m�����n��m�����Լ������С��������


#include<stdio.h>

int main(){
	int n,m,r,p;
	int temp;
	

while(1){	//Ҫʵ�ֳ����жϵ������жϣ����������Ҫ�Ž�ѭ���У������������ѭ�� 
	//������ֵ
	scanf("%d%d",&n,&m);
	//�ж�������С��������������
	if(n<=m){
		temp=m;
		m=n;
		n=temp;
	}
	p=m*n;
	
	//�����Լ��,շת����� 
	while(1){
		r=n%m;
		if(r!=0){
			n=m;
			m=r;
		}
		else 
			break;
	}
	printf("���Լ����%d\n",m);
	printf("��С��������%d\n",p/m);//ԭʼm*nֵ�������Լ��������С������ 
	
}	
	
	return 0;
	 
}



