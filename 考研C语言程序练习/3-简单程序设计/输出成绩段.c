//要求按照考试成绩的等级输出百分制分数段，A等为85分以上，B等为70-84分，C等为60-69分，D等为60分以下。成绩的等级由键盘输入//
/*
1-用switch结构进行选择输出 
*/

#include<stdio.h>
void main()
{
	char ch;
	ch=getchar();
	switch(ch)
	{
		case 'A':printf("the grade :85-100\n");break;
		case 'B':printf("the grade :70-84\n");break;
		case 'C':printf("the grade :60-69\n");break;
		case 'D':printf("the grade :60以下\n");break;
		default:printf("the data is error"); 
	} 				
}
