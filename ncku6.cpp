//共同的數有幾個
#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n,m,i,data,j,count,find,fj;
	vector<int> list1,list2;
	scanf("%d %d",&n,&m);
	while(n--){
		i=0;
		while(i++<m){
			scanf("%d",&data);
			list1.push_back(data);
		}
		i=0;
		while(i++<m){
			scanf("%d",&data);
			list2.push_back(data);
		}
		i=-1;
		j=-1;
		count=0;
		fj=-1;
		while(++i<list1.size()){
			find=0;//初始化
			while(++j<list2.size()){
				if(list1[i]==list2[j]){
					count++;//記數
					find=1;//有找到一樣的
					fj=j;//把找到的j的位置記下來
					break;
				}
			}
			if(!find){ //沒有找到一樣的話
				j=fj;
			}
		}
		printf("%d\n",count);
		list1.clear();
		list2.clear();
	}
	return 0;
}