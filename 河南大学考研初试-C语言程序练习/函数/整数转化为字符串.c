//����һ��������ת��Ϊ�ַ������

/*
1-���õݹ���Щ 
*/ 


#include<stdio.h>
void change(int n){
	if(n/10==0){
		printf("ת�����ַ���Ϊ��%c",n%10+'0');
	}
	else{
		change(n/10) ;
		printf("%c",n%10+'0');	//�������䲻���٣�����ֻ������λ��Ӧ�ַ� 
	}
 		
	
	
}
int main(){
	int n;
	while(1){  //�ó������һֱ���� 
		printf("\n����һ��������");
		scanf("%d",&n); 
		if(n<0)
			puts("��������"); 
		else{
			change(n);	
		}
		
	}
	return 0;
}
