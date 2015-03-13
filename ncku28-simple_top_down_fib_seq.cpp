#include<iostream>
#include<cstdio>
#define MAX 30 
using namespace std;
bool isFind[MAX]={false};
int fb[MAX]={0};
int fib(int x);
int main()
{
	int x,result;
	while(scanf("%d",&x)!=EOF){
		printf("%d\n",fib(x));
	}
	return 0;
}
int fib(int x)
{
	if(x==0)
		return 0;
	else if(x==1)
		return 1;
	else{
		if(isFind[x])
			return fb[x];
		fb[x]=fib(x-1) + fib(x-2);
		isFind[x]=true;
		return fb[x];
	}
}