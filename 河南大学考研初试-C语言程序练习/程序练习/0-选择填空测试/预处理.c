#define LEFTTER 1
#include<stdio.h>

void main(){
	char str[20]="C Language",c;
	int i=0;
	while((c=str[i])!='\0')
	{
		i++;
		#ifdef LEFTTER		// �ж�ĳ�����Ƿ񱻶��壬���Ѷ��壬ִ��������� 
			if(c>='a'&&c<'z')
				c=c+1;
			else if (c=='z')
				c=c-25;
		#else		// ��#if, #ifdef, #ifndef��Ӧ, ����Щ���������㣬��ִ��#else֮�����䣬�൱��C�﷨�е�else
		
			if(c>='B'&&c<='Z')
				c=c-1;
			else if(c=='A')
				c=c+25;
		#endif			//  #if, #ifdef, #ifndef��Щ��������Ľ�����־.
		printf("%c",c);
	}
}
