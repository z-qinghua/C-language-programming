#include<stdio.h> 
#define IntMax 101
//�ṹ�� 
typedef struct Patient{
	char id[11];
	int age;
}PT;
PT s[IntMax];
PT dest[IntMax];
int n;
int m=0;

//���벡����Ϣ 
void InPut(){
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){//����id������ 
		scanf("%s",&s[i].id);
		scanf("%d",&s[i].age) ;
	}
}

//�������ID
void OutPut() {
	int i;
	for(i=0;i<m;i++){//������������˾������� 
		printf("%s\n",dest[i].id);
	}
}

//����
void Pt_Sort() {	//ѡ������ 
	int i,j;

	PT temp;//���������ռ� 
	for(i=0;i<n;i++){
		if(s[i].age>=60){//�����˱ȷ����������ȿ��� 
			dest[m]=s[i];
			m++;
		}	
	}	
	for(i=0;i<m-1;i++){ //�����˰�������Ӵ�С˳�� 
		for(j=i+1;j<m;j++){
			if(dest[i].age<dest[j].age){
				temp=dest[i];
				dest[i]=dest[j];
				dest[j]=temp;
			}
			else 
				continue; 
		}
	}
	for(i=0;i<n;i++){
		if(s[i].age<60){
			dest[m]=s[i];
			m++;
		}	
	}
		
}

int main(){
	InPut();
	Pt_Sort();
	OutPut();
	return 0;
}
