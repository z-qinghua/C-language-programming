#include <iostream>
using namespace std;

void ForEach(void * a, int width, int num,void (*f)(void *))//指向函数的指针变量
 
{
	for(int i = 0;i < num; ++i) 
		f((char*)a+width*i);
}

void PrintSquare(void * p)
{
	int * q = (int*)p;//强制类型转换 
	int n = *q;
	cout << n * n << ",";
}
void PrintChar(void * p) {
	char * q = (char*)p;
	cout << *q << ",";
}
int main()
{
	int a[5] = {1,2,3,4,5};
	char s[] = "hello!";
	ForEach(a,sizeof(int),5,PrintSquare); 
	cout << endl;
	ForEach(s,sizeof(char),6,PrintChar);
	return 0;
}
