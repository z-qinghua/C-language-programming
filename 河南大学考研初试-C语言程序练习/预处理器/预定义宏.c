//Ԥ�����

/*
__DATE__	��ǰ���ڣ�һ���� "MMM DD YYYY" ��ʽ��ʾ���ַ�������
__TIME__	��ǰʱ�䣬һ���� "HH:MM:SS" ��ʽ��ʾ���ַ�������
__FILE__	��������ǰ�ļ�����һ���ַ���������
__LINE__	��������ǰ�кţ�һ��ʮ���Ƴ�����
__STDC__	���������� ANSI ��׼����ʱ������Ϊ 1��s
*/

#include<stdio.h>

void main(){
	printf("File:%s\n",__FILE__);
	printf("Date:%s\n",__DATE__);
	printf("Time:%s\n",__TIME__);
	printf("Line:%d\n",__LINE__); 
	printf("ANSI:%d\n",__STDC__);
} 
