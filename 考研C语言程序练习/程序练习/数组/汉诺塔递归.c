//��ŵ���ݹ飺n�����Ӵ�A�ƶ���C��һ��ֻ���ƶ�һ�����������£�С������ 

/*�㷨 
1-�Ƚ�n-1�����Ӵ�A�Ƶ�B
2-Ȼ����Խ���n�����Ӵ�A�ƶ���C move(n,A,C)
3-�����ٽ�n-2�����Ӵ�B�Ƶ�A
4-��n-1���Ƶ�C 
�ظ����沽�� 
*/ 

#include<stdio.h>
int m;
void hanoi(int n,char a,char b,char c){
	m++;//�ƶ����� 
	if(n==1)		//һ��Ҫ���ý������� 
		printf("%c-->%c\n",a,c);
	else{
		hanoi(n-1,a,c,b);//n-1�����Ƶ�B��C��������  
		printf("%c-->%c\n",a,c);//A���ϵ�n������ ֱ���Ƶ�C�� ���������䲻���� 
		hanoi(n-1,b,a,c);//��B����n-1�������Ƶ�C�� 
	}
	
	
}
int main(){
	int n;
	while(1){
		m=0; 
		printf("����������");
		scanf("%d",&n);
		if(n<=0)
			printf("the data error!\n");
		else
			
			hanoi(n,'A','B','C');//n�����Ƶ�C��B��������  
		printf("ѭ��������%d\n",m);
		
	}
	return 0; 
}
 



