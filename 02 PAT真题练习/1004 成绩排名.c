#include<stdio.h>
typedef struct student{
	char name[11];
	char id[11];
	unsigned int score;
}STU;

int  main(){
	int i,j,n;
	scanf("%d",&n);	
	STU s[n];//C99����ʹ�ñ����������� 
	for(i=0;i<n;i++){
		scanf("%s %s %d",s[i].name,s[i].id,&s[i].score);
	}
	STU temp;//���������ռ� 
	for(i=0;i<n-1;i++){//ѡ�����򣬴Ӵ�С 
		for(j=i+1;j<n;j++){
			if(s[i].score<s[j].score){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}	
			else 
				continue;
		}
	}
	printf("%s %s\n",s[0].name,s[0].id);
	printf("%s %s\n",s[n-1].name,s[n-1].id);

	return 0;
}
