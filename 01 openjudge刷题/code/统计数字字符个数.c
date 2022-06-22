#include<stdio.h> 
#include<string.h>
int main(){
	int i,l,sum=0;
	char str[255];
	gets(str);
	for(i=0;str[i];i++){
		if(str[i]>=48&&str[i]<=57){
			sum++;
		}
	}
	printf("%d",sum);	
	return 0;
}
