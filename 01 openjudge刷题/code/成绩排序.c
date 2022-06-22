#include<stdio.h> 
#include<string.h>
#define Max 21
typedef struct Student{
	char name[21];
	unsigned int score;
}STU;
STU s[Max];
int n;

//输入学生个数和学生信息
void input() {
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s[i].name);
		scanf("%d",&s[i].score);
	}
}
//输出学生信息
void output() {
	int i;
	for(i=0;i<n;i++){
		printf("%s",s[i].name);
		printf(" %d",s[i].score);
		printf("\n");
	}
}
//成绩排序
void stu_sort() {
	STU temp;//构建辅助空间 
	int i,j;
	for(i=0;i<n-1;i++){//选择排序 
		for(j=i+1;j<n;j++){
			if(s[i].score<s[j].score){//后一个成绩比前一个成绩高，则交换 
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			else if(s[i].score==s[j].score){//成绩相等，按字典排序 
				int flag;
				flag=strcmp(s[i].name,s[j].name) ;//比较名字大小 
				if(flag>0) {//后面一个名字比前一个小，则交换 
					temp=s[i];
					s[i]=s[j];
					s[j]=temp;
				}
				else //后一个名字比前一个大，则不交换
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
