//输入一个字符，判别它是否为大写字母，如果是，将它转换成小写字母；如果不是，不转换。然后输出最后得到的字符。
#include<stdio.h>
void main()
{
	char x;
	x=getchar();
	if(x>='A'&&x<='Z')
		x=x+32;
	putchar(x);
}
