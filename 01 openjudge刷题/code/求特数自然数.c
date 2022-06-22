#include <stdio.h>
int main()
{
	int a,b,c;
    // 用三重循环穷举3位7进制数
    for (a=1;a<7;a++)
        for (b=0; b<7; b++)
            for (c=1; c<7; c++)
            {
                // 判断7进制数与倒过来的9进制数是否相同
                if (a*7*7+b*7+c == c*9*9 + b*9 + a)
                {
                    printf("%d\n", a*7*7+b*7+c);
                    printf("%d%d%d\n",a,b,c);
                    printf("%d%d%d\n",c,b,a);
                    return 0;
                }

            }
    return 0;
}
