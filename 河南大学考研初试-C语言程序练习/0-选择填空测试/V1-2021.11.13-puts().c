#include<stdio.h>
#include<string.h>

int main()
{
	char w[20],a[5][10]={"abcdef","ghijkl","mnopq","rstuv","wxyz"};
	int i;
	for(i=0;i<5;i++)
	{
		w[i]=a[i][strlen(a[i])-1];
	}
		w[5]='\0';
		puts(w);
}
