//A1B2C3=ABBCCC
#include<iostream>
#include<string>
#include<cstdio>
#include<queue>
using namespace std;

int main()
{
	int test,a=-1,b=0,value=0;
	string str;
	queue<int> time;
	queue<char> ch,result;
	scanf("%d",&test);
	scanf("\n");
	while(++a<test){
		getline(cin,str);
		ch.push(str[0]);//第一個數必為字母
		//printf("%c\n",ch.front());
		value=0;//初始化
		b=0;//初始化
		while(++b<str.size()){
			if(str[b]>90 || str[b]<65)//非字母
				value=value*10+(str[b]-48);
			else{
				time.push(value);
				value=0;
					ch.push(str[b]);
			}
			
		}
		time.push(value);
		while(!ch.empty()){
			for(b=0;b<time.front();b++)
				result.push(ch.front());
			ch.pop();
			time.pop();
		}
		printf("Case %d: ",a+1);
		while(!result.empty()){
			printf("%c",result.front());
			result.pop();
		}
		printf("\n");
	}
	return 0;
}