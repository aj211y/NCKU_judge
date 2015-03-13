#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

struct LIS
{
	int seq;
	int dp;
	int pi;
};
int main()
{
	int num,i,j,max;
	vector<LIS> list;
	LIS data;
	data.dp=1;
	data.pi=-1;
	while(scanf("%d",&num)!=EOF){
		max=1;
		while(num--){
			scanf("%d",&data.seq);
			list.push_back(data);
		}
		for(i=0;i<list.size();i++){
			for(j=i+1;j<list.size();j++){
				if(list[i].seq<list[j].seq){
					if(list[i].dp+1 > list[j].dp){
						list[j].dp=list[i].dp+1;
						list[j].pi=i;
						if(list[j].dp>max)
							max=list[j].dp;
					}
				}
			}
		}
		printf("%d\n",max);
		list.clear();
	}
	return 0;
}