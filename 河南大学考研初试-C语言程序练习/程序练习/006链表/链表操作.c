#include<stdio.h>
#include<stdlib.h> 

// ����һ������
typedef struct student{
	int score;
	struct student *next;
}LinkList;	//��ʱ����ṹ�����ʱ������ֱ����LinkList������� 

LinkList *creat(int n); //ԭ������ 

void main()
{
	
	 
}
//��ʼ��һ������nΪ����ڵ����
 LinkList *creat(int n){
 	LinkList *head,*node,*end;//����ͷ��㡢��ͨ��� ��β���
	 head=(LinkList *)malloc(sizeof(LinkList));
	 end=head;//���ǿ�������ͷβ���һ�� 
	 int i;
	 for(i=0;i<n;i++){
	 	node=(LinkList *)malloc(sizeof(LinkList));
	 	scanf("%d",&node->score);
	 	end->next=node;
	 	end=node;
	 } 
	 end->next=NULL;//��������
	 return head; 
 } 
 
 
