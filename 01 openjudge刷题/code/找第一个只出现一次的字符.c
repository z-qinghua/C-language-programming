#include<stdio.h>
#include<string.h>
char str[100000];
int main(){
	int i,j,num=0;
	gets(str);
	for(i=0;str[i];i++){
		num=0;//ÿ����һ����ѭ����Ҫ��ʼ�� 
		for(j=0;str[j];j++){
			if(str[i]==str[j])
				num++;
		}
		if(num==1){
			printf("%c",str[i]);
			return 0;	
		}	
	}
	printf("no");
	return 0;
}
