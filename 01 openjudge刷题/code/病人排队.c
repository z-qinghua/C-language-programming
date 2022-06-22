#include<stdio.h> 
#define IntMax 101
//结构体 
typedef struct Patient{
	char id[11];
	int age;
}PT;
PT s[IntMax];
PT dest[IntMax];
int n;
int m=0;

//输入病人信息 
void InPut(){
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){//输入id和年龄 
		scanf("%s",&s[i].id);
		scanf("%d",&s[i].age) ;
	}
}

//输出病人ID
void OutPut() {
	int i;
	for(i=0;i<m;i++){//按序输出老年人就诊名单 
		printf("%s\n",dest[i].id);
	}
}

//排序
void Pt_Sort() {	//选择排序 
	int i,j;

	PT temp;//构建辅助空间 
	for(i=0;i<n;i++){
		if(s[i].age>=60){//老年人比非老年人优先看病 
			dest[m]=s[i];
			m++;
		}	
	}	
	for(i=0;i<m-1;i++){ //老年人按照年龄从大到小顺序 
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
