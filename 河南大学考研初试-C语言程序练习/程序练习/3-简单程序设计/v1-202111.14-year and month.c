//���������ꡢ�£��жϸ����ж�����

/*
1-�������·ݽ����жϣ���ȷ�����ִ�У������������
2-�ж���������Ƿ�Ϊ���ꣻ
	1������2�·�Ϊ29��
	2������2�·�Ϊ28�� 
*/ 

#include<stdio.h>

void main()
{
	int month,year;
	printf("input the year and month:");
	scanf("%d%d",&year,&month);
	if(month<13&&month>0)
	{
		switch(month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("31��");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
			printf("30��");break;
			case 2:
				if((year%4==0&&year%100!=0)||year%400==0)
					printf("29��");
				else
					printf("28��");
				break;
		}
	}
 } 
