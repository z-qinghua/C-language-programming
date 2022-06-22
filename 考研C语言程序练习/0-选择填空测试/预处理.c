#define LEFTTER 1
#include<stdio.h>

void main(){
	char str[20]="C Language",c;
	int i=0;
	while((c=str[i])!='\0')
	{
		i++;
		#ifdef LEFTTER		// 判断某个宏是否被定义，若已定义，执行随后的语句 
			if(c>='a'&&c<'z')
				c=c+1;
			else if (c=='z')
				c=c-25;
		#else		// 与#if, #ifdef, #ifndef对应, 若这些条件不满足，则执行#else之后的语句，相当于C语法中的else
		
			if(c>='B'&&c<='Z')
				c=c-1;
			else if(c=='A')
				c=c+25;
		#endif			//  #if, #ifdef, #ifndef这些条件命令的结束标志.
		printf("%c",c);
	}
}
