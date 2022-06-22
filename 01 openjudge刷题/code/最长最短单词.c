#include<stdio.h>
#include<string.h>
char str[20101];
int main(){
	int sum=0,max_len=0,min_len=9999;
	int max_position,min_position;
	int i,len;
	gets(str);
	len=strlen(str);//求字符串长度
	str[len] =' ';//在字符串后加空格，方便判定 
	
	for(i=0;i<=len;i++){//要遍历到最后一个字母后一位 
		if(str[i]!=' '&&str[i]!=','){//不是空格或逗号累加长度 
			sum++;
		}
		else if(sum>0){//若是空格或逗号 
			if(sum>max_len){
				max_len=sum;//存储目前最长单词长度 
				max_position=i-sum;//记录最长单词的位置 
			}
			if(sum<min_len){
				min_len=sum;
				min_position=i-sum;
			}
			sum=0;//计数器归零 
		}
	}
	for(i=max_position;i<=max_position+max_len-1;i++)
		printf("%c",str[i]);
	printf("\n");
	for(i=min_position;i<=min_position+min_len-1;i++)
		printf("%c",str[i]);
	return 0;
}
