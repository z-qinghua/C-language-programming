//读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
#include<stdio.h>
#include<string.h>

int main(){
	int sum=0;	
	int k,i=0;
	char str[1000];
	scanf("%s",str);
	while(str[i]){
		sum=sum+str[i]-'0';//各数字之和 
		i++;
		}
	char s[10][10];
	i=0; 
	while(sum){
		k=sum%10;
		switch(k){
			case 0:strcpy(s[i],"ling");
				break;
			case 1:strcpy(s[i],"yi");
				break;
			case 2:strcpy(s[i],"er");
				break;
			case 3:strcpy(s[i],"san");
				break;
			case 4:strcpy(s[i],"si");
				break;
			case 5:strcpy(s[i],"wu");
				break;
			case 6:strcpy(s[i],"liu");
				break;
			case 7:strcpy(s[i],"qi");
				break;
			case 8:strcpy(s[i],"ba");
				break;
			case 9:strcpy(s[i],"jiu");
				break;
		}
		sum=sum/10;	
		i++;
	}
	i--;
	for(;i>0;i--){
		printf("%s ",s[i]);
	}
	printf("%s",s[0]);
	return 0;
}
