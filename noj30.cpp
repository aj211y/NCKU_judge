//NOJ-30-LIS-§Ù√D
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#define MAX 1010
using namespace std;


int main()
{
	int num,M;
	int dp[MAX],list[MAX];
	while(scanf("%d",&num)!=EOF)
	{
		for(int i=0;i<num;i++)
			dp[i]=1;
		for(int i=0;i<num;i++)
			scanf("%d",&list[i]);
		M=0;
		for(int i=0;i<num;i++)
		{
			for(int j=i;j>=0;j--)
			{
				if(list[i]>list[j] && dp[j]+1>dp[i])
					dp[i]=dp[j]+1;
			}
			if(M<dp[i])
				M=dp[i];
		}
		printf("%d\n",M);
	}
	return 0;
}