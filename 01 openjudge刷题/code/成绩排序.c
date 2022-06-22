#include<stdio.h> 
#include<string.h>
#define Max 21
typedef struct Student{
	char name[21];
	unsigned int score;
}STU;
STU s[Max];
int n;

//����ѧ��������ѧ����Ϣ
void input() {
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s[i].name);
		scanf("%d",&s[i].score);
	}
}
//���ѧ����Ϣ
void output() {
	int i;
	for(i=0;i<n;i++){
		printf("%s",s[i].name);
		printf(" %d",s[i].score);
		printf("\n");
	}
}
//�ɼ�����
void stu_sort() {
	STU temp;//���������ռ� 
	int i,j;
	for(i=0;i<n-1;i++){//ѡ������ 
		for(j=i+1;j<n;j++){
			if(s[i].score<s[j].score){//��һ���ɼ���ǰһ���ɼ��ߣ��򽻻� 
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			else if(s[i].score==s[j].score){//�ɼ���ȣ����ֵ����� 
				int flag;
				flag=strcmp(s[i].name,s[j].name) ;//�Ƚ����ִ�С 
				if(flag>0) {//����һ�����ֱ�ǰһ��С���򽻻� 
					temp=s[i];
					s[i]=s[j];
					s[j]=temp;
				}
				else //��һ�����ֱ�ǰһ�����򲻽���
					continue;
			}
		}
	}
}
int main()
{
	input();
	stu_sort();
	output();
	return 0;	
}
