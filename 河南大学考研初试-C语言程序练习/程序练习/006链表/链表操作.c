#include<stdio.h>
#include<stdlib.h> 

// 创建一个链表
typedef struct student{
	int score;
	struct student *next;
}LinkList;	//此时定义结构体变量时，可以直接用LinkList定义变量 

LinkList *creat(int n); //原型声明 

void main()
{
	
	 
}
//初始化一个链表，n为链表节点个数
 LinkList *creat(int n){
 	LinkList *head,*node,*end;//定义头结点、普通结点 、尾结点
	 head=(LinkList *)malloc(sizeof(LinkList));
	 end=head;//若是空链表则头尾结点一样 
	 int i;
	 for(i=0;i<n;i++){
	 	node=(LinkList *)malloc(sizeof(LinkList));
	 	scanf("%d",&node->score);
	 	end->next=node;
	 	end=node;
	 } 
	 end->next=NULL;//结束创建
	 return head; 
 } 
 
 
