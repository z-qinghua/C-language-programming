//编写函数，交换两个字符串，要求形参以指针形式出现

//△注意和交换两个数字不太一样

#include<stdio.h>
#include<string.h>
void change(char *a,char *b){
	char p[100];
	strcpy(p,a);
	strcpy(a,b);
	strcpy(b,p);
	//不能用赋值符直接赋值
	puts("交换后的字符串如下"); 
	puts(a);
	puts(b);
}

int main(){
	char a[100],b[100];
	gets(a);
	gets(b);
	change(a,b);
	return 0;
}
