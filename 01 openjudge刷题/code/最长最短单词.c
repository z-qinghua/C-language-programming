#include<stdio.h>
#include<string.h>
char str[20101];
int main(){
	int sum=0,max_len=0,min_len=9999;
	int max_position,min_position;
	int i,len;
	gets(str);
	len=strlen(str);//���ַ�������
	str[len] =' ';//���ַ�����ӿո񣬷����ж� 
	
	for(i=0;i<=len;i++){//Ҫ���������һ����ĸ��һλ 
		if(str[i]!=' '&&str[i]!=','){//���ǿո�򶺺��ۼӳ��� 
			sum++;
		}
		else if(sum>0){//���ǿո�򶺺� 
			if(sum>max_len){
				max_len=sum;//�洢Ŀǰ����ʳ��� 
				max_position=i-sum;//��¼����ʵ�λ�� 
			}
			if(sum<min_len){
				min_len=sum;
				min_position=i-sum;
			}
			sum=0;//���������� 
		}
	}
	for(i=max_position;i<=max_position+max_len-1;i++)
		printf("%c",str[i]);
	printf("\n");
	for(i=min_position;i<=min_position+min_len-1;i++)
		printf("%c",str[i]);
	return 0;
}
