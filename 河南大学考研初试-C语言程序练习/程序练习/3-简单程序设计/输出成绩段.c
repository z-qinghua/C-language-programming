//Ҫ���տ��Գɼ��ĵȼ�����ٷ��Ʒ����Σ�A��Ϊ85�����ϣ�B��Ϊ70-84�֣�C��Ϊ60-69�֣�D��Ϊ60�����¡��ɼ��ĵȼ��ɼ�������//
/*
1-��switch�ṹ����ѡ����� 
*/

#include<stdio.h>
void main()
{
	char ch;
	ch=getchar();
	switch(ch)
	{
		case 'A':printf("the grade :85-100\n");break;
		case 'B':printf("the grade :70-84\n");break;
		case 'C':printf("the grade :60-69\n");break;
		case 'D':printf("the grade :60����\n");break;
		default:printf("the data is error"); 
	} 				
}
