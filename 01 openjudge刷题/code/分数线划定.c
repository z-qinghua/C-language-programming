#include<stdio.h>
typedef struct volunteer{
	int id;
	int score;
}VU;
VU s[5000];
int n,m,t;
float num;
int lowest_score;
//输入报名选手信息 
void InPut(){
	int i;
	scanf("%d%d",&n,&m);
	num=m*1.5;
	for(i=0;i<n;i++){
		scanf("%d%d",&s[i].id,&s[i].score);
	}	
}

//输出进入面试的志愿者信息 
void OutPut(){
	int i;
	int k=0;
	t=(int)num;
	for(i=t;i<n;i++){//判断有无相同最低分 
		if(s[i].score==s[t-1].score){
			k++;//进入面试的人+1 
		}
	}
	lowest_score=s[t-1].score;
	printf("%d %d\n",lowest_score,t+k);
	for(i=0;i<t+k;i++){
		printf("%d %d\n",s[i].id,s[i].score);
	}
}

//按分数排序
void Volunteer_Sort() {//选择排序 
	VU temp;//构建辅助空间
	int i,j;
	for(i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++){
			if(s[i].score<s[j].score){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;//注意点 
			}
			else if(s[i].score==s[j].score){
				if(s[i].id>s[j].id){//序号小的放前面 
					temp=s[i];
					s[i]=s[j];
					s[j]=temp;//
				}
				else
					continue;
			}
		}
	}
}

int main(){
	InPut();
	Volunteer_Sort();
	OutPut();
	return 0;
}
