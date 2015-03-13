//¦s´Ú±Æ§Ç
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int amount,coco;
	vector<int> money;
	while(scanf("%d",&amount)!=EOF){
		if(!amount)
			break;
		while(amount--){
			scanf("%d",&coco);
			money.push_back(coco);
		}
		sort(money.begin(),money.end());
		for(coco=0;coco<money.size();coco++){
			printf("%d",money[coco]);
			if(coco==money.size()-1)
				printf("\n");
			else
				printf(" ");
		}
		money.clear();
	}
	return 0;
}