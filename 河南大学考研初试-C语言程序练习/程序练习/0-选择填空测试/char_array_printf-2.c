#include<stdio.h>
int main()
{
	char *s[6]={"ABCD","EFGH","IJKL","MNOP","QRST","UVWX"},**p;
	int i;
	p=s;
	for(i=0;i<4;i++)
	printf("%s",p[i]);
	printf("\n"); 
}
