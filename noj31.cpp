//NOJ-LCS-§Ù√D 
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#define MAX 150
using namespace std;

int dp[MAX][MAX];
int main()
{
	char s1[MAX],s2[MAX];
	int len1,len2;
	while(scanf("%s",s1)!=EOF)
	{
		memset(dp,0,sizeof(dp));
		scanf("%s",s2);
		len1=strlen(s1);
		len2=strlen(s2);
		for(int i=0;i<len1;i++)
		{
			for(int j=0;j<len2;j++)
			{
				if(s1[i]==s2[j])
					dp[i+1][j+1]=dp[i][j]+1;
				else
					dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
			}
		}
		printf("%d\n",dp[len1][len2]);
	}
	return 0;
}