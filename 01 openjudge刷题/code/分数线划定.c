#include<stdio.h>
typedef struct volunteer{
	int id;
	int score;
}VU;
VU s[5000];
int n,m,t;
float num;
int lowest_score;
//���뱨��ѡ����Ϣ 
void InPut(){
	int i;
	scanf("%d%d",&n,&m);
	num=m*1.5;
	for(i=0;i<n;i++){
		scanf("%d%d",&s[i].id,&s[i].score);
	}	
}

//����������Ե�־Ը����Ϣ 
void OutPut(){
	int i;
	int k=0;
	t=(int)num;
	for(i=t;i<n;i++){//�ж�������ͬ��ͷ� 
		if(s[i].score==s[t-1].score){
			k++;//�������Ե���+1 
		}
	}
	lowest_score=s[t-1].score;
	printf("%d %d\n",lowest_score,t+k);
	for(i=0;i<t+k;i++){
		printf("%d %d\n",s[i].id,s[i].score);
	}
}

//����������
void Volunteer_Sort() {//ѡ������ 
	VU temp;//���������ռ�
	int i,j;
	for(i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++){
			if(s[i].score<s[j].score){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;//ע��� 
			}
			else if(s[i].score==s[j].score){
				if(s[i].id>s[j].id){//���С�ķ�ǰ�� 
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
