//topological sort 這題沒有環
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;

int n,m,task[120],list[120][120],degree[120],M=0,tmp=0;
bool visited[120];
void DFS(int id)
{
	visited[id]=true;
	tmp+=task[id];
	if(M<tmp)
		M=tmp;
	for(int i=1;i<=n;i++)
	{
		if(list[id][i]==1 && !visited[i])
			DFS(i);
	}
	tmp-=task[id];
	visited[id]=false;
}
int main()
{
	int i,a,b;
	while(scanf("%d",&n)!=EOF)
	{
		memset(task,0,sizeof(task));
		memset(list,0,sizeof(list));
		memset(degree,0,sizeof(degree));
		memset(visited,false,sizeof(visited));
		M=0;
		for(i=1;i<=n;i++)
			scanf("%d",&task[i]);//第幾個任務需耗時幾天
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d%d",&a,&b);
			list[a][b]=1;
			degree[b]++;
		}
		for(i=1;i<=n;i++)
		{
			if(degree[i]==0)
			{
				tmp=0;
				DFS(i);
			}
		}
		printf("%d\n",M);
	}
	return 0;
}