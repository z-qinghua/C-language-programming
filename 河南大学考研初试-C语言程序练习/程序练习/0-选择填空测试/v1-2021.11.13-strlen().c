#include<stdio.h>
#include<string.h>

int main()
{
	char name[10]="c-book";
	char *str=name;
	printf("%d,%d,%d,%d\n",sizeof(name),strlen(name),sizeof(str),strlen(str));
	return 0;
}
