//¶¥¼h¹Bºâ
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	long long int x,result=1,a;
	while(scanf("%lld",&x)!=EOF){
		if(x==0){
			printf("1\n");
		}
		else{
			result=1;
			for(a=1;a<=x;a++){
				result=result*a;
			}
			printf("%lld\n",result);
		}
	}
	return 0;
}
