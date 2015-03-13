//最大公因數
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int x,y,tmp,div,max;
	while(scanf("%d %d",&x,&y)!=EOF){
		if(x==y && x==0)
			break;
		if(x<y){
			tmp=x;
			div=y;
			max=y;
		}
		else{
			tmp=y;
			div=x;
			max=x;
		}
		while(tmp){
			if(!(div%tmp)){
				printf("%d\n",tmp);
				break;
			}
			div=tmp;
			tmp=max%tmp;
			max=div;
		}
	}
	return 0;
}