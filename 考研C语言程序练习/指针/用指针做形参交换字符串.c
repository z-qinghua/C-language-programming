//��д���������������ַ�����Ҫ���β���ָ����ʽ����

//��ע��ͽ����������ֲ�̫һ��

#include<stdio.h>
#include<string.h>
void change(char *a,char *b){
	char p[100];
	strcpy(p,a);
	strcpy(a,b);
	strcpy(b,p);
	//�����ø�ֵ��ֱ�Ӹ�ֵ
	puts("��������ַ�������"); 
	puts(a);
	puts(b);
}

int main(){
	char a[100],b[100];
	gets(a);
	gets(b);
	change(a,b);
	return 0;
}
