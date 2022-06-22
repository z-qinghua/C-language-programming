/*
用指针和数组两种方法实现如下功能：将一个字符串逆序存放 
要求：1）主函数中完成输入和输出字符串
	  2）逆序功能用子函数完成 
*/

#include<stdio.h>
#include<string.h>
#define N 20
//指针法
 
//void revert(char *i_pointer,int n);



//逆序函数(指针法)
/*
void revert(char *i_pointer,int n){
	char *i,*j,temp;
	for(i=i_pointer,j=i_pointer+n-1;i<=j;i++,j--){
		temp=*i;*i=*j;*j=temp;
	}

}  
*/ 

//逆序函数(数组法)
void revert(char str[]/*此处可以不确定个数*/,int n){
	int i,j,temp;
	for(i=0,j=n-1;i<=j;i++,j--){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	
} 

//主函数，实现输入、输出 
int main(){
	char str[N];
	gets(str);//输入时遇到空格不会结束 
	revert(str,strlen(str));
	puts(str);
	return ;
}
