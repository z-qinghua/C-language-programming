/*
��ָ����������ַ���ʵ�����¹��ܣ���һ���ַ��������� 
Ҫ��1����������������������ַ���
	  2�����������Ӻ������ 
*/

#include<stdio.h>
#include<string.h>
#define N 20
//ָ�뷨
 
//void revert(char *i_pointer,int n);



//������(ָ�뷨)
/*
void revert(char *i_pointer,int n){
	char *i,*j,temp;
	for(i=i_pointer,j=i_pointer+n-1;i<=j;i++,j--){
		temp=*i;*i=*j;*j=temp;
	}

}  
*/ 

//������(���鷨)
void revert(char str[]/*�˴����Բ�ȷ������*/,int n){
	int i,j,temp;
	for(i=0,j=n-1;i<=j;i++,j--){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	
} 

//��������ʵ�����롢��� 
int main(){
	char str[N];
	gets(str);//����ʱ�����ո񲻻���� 
	revert(str,strlen(str));
	puts(str);
	return ;
}
