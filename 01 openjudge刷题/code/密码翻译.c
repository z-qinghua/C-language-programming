#include<stdio.h> 
int main(){
	char str[81];
	int i;
	gets(str);
	for(i=0;str[i];i++) {
		if((str[i]>='a'&&str[i]<='y')||(str[i]>='A'&&str[i]<='Y')){
			str[i]=str[i]+1;
		}
		else if(str[i]=='z'||str[i]=='Z')
			str[i]=str[i]-25;
	}
	for(i=0;str[i];i++)
		printf("%c",str[i]);
	return 0;
}
