/*
	1-ֻ����'P', 'A', 'T'�����ַ���
	2-'P', 'T'ֻ�ܳ���һ�β��Ұ��ո�˳���Ⱥ���֣�
	3-P&T֮�䲻��û��A��
	4-T֮��A������ = P֮ǰA������ �� P&T�м�A��������
*/


#include<stdio.h>
#include<string.h>

int main(){
	char c;
	int n,i;
	scanf("%d",&n);
	while(getchar() != '\n');//�����scanf�����е���������
	for(i=0;i<n;i++){
		int pos=0,count[3]={0};//count��ʶA�ڼ���λ�÷ֱ������,���ܷ����棬��Ҫÿ��ѭ����ʼ�� 
		while((c=getchar())!='\n') {
			if(c=='A')	
				count[pos]++;//ͳ�ƶ�Ӧλ�õ�A������ 
			else if(c=='P'&&pos==0)	
				pos=1;
			else if(c=='T'&&pos==1)	
				pos=2;//��֤T������P������ֻ����һ�� 
			else 
				break;
		}
		if(c=='\n'&&pos==2&&count[1]&&count[2]==count[0]*count[1]) {
			puts("YES");
		}
		else 
			puts("NO");	
		if(c!='\n')
            while(getchar()!='\n');//�����getchar�����е���������
	}
	
	return 0;
}

//#include<stdio.h>
//int main()
//{
//    char c;
//    int num;
//    scanf("%d", &num);
//    while(getchar() != '\n');  //�����scanf�����е���������
//    int i=0;//count��ʾA�ֱ��ڼ���λ�� ������
//    for(i=0;i<num;i++)
//    {
//        int pos=0,count[3]={0,0,0};//,count[3]={0,0,0}���ܷ�����
//        while((c=getchar())!='\n'){
//            if(c=='A') 
//				count[pos]++;
//            else if(c=='P'&&pos==0) 
//				pos=1;
//            else if(c=='T'&&pos==1) 
//				pos=2;
//            else 
//				break;
//        }        
//        if(c=='\n'&&
//            pos==2&&
//            count[1]&&
//            count[2]==count[1]*count[0])
//            printf("YES\n");        //Ҳ������puts("YES");�Դ����з�
//        else  
//            printf("NO\n");        //Ҳ������puts("YES");�Դ����з�
//        if(c!='\n')
//            while(getchar()!='\n');   //�����getchar�����е���������
//    }    
//    return 0;
//}
