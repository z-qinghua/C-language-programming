#include<stdio.h>
#include<string.h>
void main()
{
	char a[5][10]={"ABCDEF","ghJKL","MNOPQ","RSTUV","WXyz"},w[20];
	int i;

	for(i=0;i<5;i++){
		w[i]=a[i][strlen(a[i])-1];
	}
//	w[5]='\0';
	puts(w);
	 } 
