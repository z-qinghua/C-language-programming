#include <iostream>
#include <iomanip>
using namespace std;
double GetDoubleFromString(char * str)
{
 static char *p;
      if(str){
          p=str;}//���׵�ַp
      double num=0;
      while(*p&&!(*p>='0'&&*p<='9'))
      {
          ++p;
      }
      if(*p==0)
      {
          return -1;
      }
      while(*p>='0'&&*p<='9')
      {
          num=num*10+*p-'0';//û��pow��һ���ַ���ת���ֵķ�ʽ
          ++p;
      }
      if(*p=='.')
      {
          ++p;
          double i=10;
          while(*p>='0'&&*p<='9')
          {
              num+=(*p-'0')/i;//�ַ�תС��
              ++p;
              i=i*10;
          }
      }
      return num;

}

int main()
{
	char line[300];
	while(cin.getline(line,280)) {
		double n;
		n = GetDoubleFromString(line);
		while( n > 0) {
			cout << fixed << setprecision(6) << n << endl;
			n = GetDoubleFromString(NULL);
		}
	}
	return 0;
}
