//两乒乓球队进行比赛，各处三人。甲队为A，B，C三人，乙队为X，Y，Z三。以抽签决定比赛名单。有人向队员打听比赛名单，A说他不和X比，C说他不和X，Z比，请编程找出3赛手的名单
/*
1-c只能和y比
2-A可以和Y,Z比
3-B可以和任何一人比 
*/

#include<stdio.h>

void main()
{
	char i,j,k;//分别为ABC三人对手
	for(k='X';k<='Z';k++)
	{
		if(k!='X'&&k!='Z')
		{
			for(i='X';i<='Z';i++)
			if(i!='X')
			for(j='X';j<='Z';j++)
				if(i!=j&&i!=k&&j!=k)//保证三人对手不重复 
					printf("A-->%c\tB-->%c\tC-->%c\n",i,j,k);

		}
	 } 
	
}
