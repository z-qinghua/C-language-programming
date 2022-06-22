/*
	1-只存在'P', 'A', 'T'三种字符；
	2-'P', 'T'只能出现一次并且按照该顺序先后出现；
	3-P&T之间不能没有A；
	4-T之后A的数量 = P之前A的数量 × P&T中间A的数量。
*/


#include<stdio.h>
#include<string.h>

int main(){
	char c;
	int n,i;
	scanf("%d",&n);
	while(getchar() != '\n');//来清除scanf缓存中的垃圾数据
	for(i=0;i<n;i++){
		int pos=0,count[3]={0};//count标识A在几个位置分别的数量,不能放上面，需要每次循环初始化 
		while((c=getchar())!='\n') {
			if(c=='A')	
				count[pos]++;//统计对应位置的A的数量 
			else if(c=='P'&&pos==0)	
				pos=1;
			else if(c=='T'&&pos==1)	
				pos=2;//保证T出现在P后面且只出现一次 
			else 
				break;
		}
		if(c=='\n'&&pos==2&&count[1]&&count[2]==count[0]*count[1]) {
			puts("YES");
		}
		else 
			puts("NO");	
		if(c!='\n')
            while(getchar()!='\n');//来清除getchar缓存中的垃圾数据
	}
	
	return 0;
}

//#include<stdio.h>
//int main()
//{
//    char c;
//    int num;
//    scanf("%d", &num);
//    while(getchar() != '\n');  //来清除scanf缓存中的垃圾数据
//    int i=0;//count表示A分别在几个位置 的数量
//    for(i=0;i<num;i++)
//    {
//        int pos=0,count[3]={0,0,0};//,count[3]={0,0,0}不能放上面
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
//            printf("YES\n");        //也可以用puts("YES");自带换行符
//        else  
//            printf("NO\n");        //也可以用puts("YES");自带换行符
//        if(c!='\n')
//            while(getchar()!='\n');   //来清除getchar缓存中的垃圾数据
//    }    
//    return 0;
//}
