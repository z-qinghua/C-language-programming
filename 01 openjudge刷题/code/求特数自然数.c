#include <stdio.h>
int main()
{
	int a,b,c;
    // ������ѭ�����3λ7������
    for (a=1;a<7;a++)
        for (b=0; b<7; b++)
            for (c=1; c<7; c++)
            {
                // �ж�7�������뵹������9�������Ƿ���ͬ
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
