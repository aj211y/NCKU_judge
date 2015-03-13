//јЖ¦rВЅВа
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string str;
	int end=str.size()-1;
	while(cin >> str){
		end=str.size()-1;
		while(str[end]=='0'){
			end--;
		}
		for(int a=end;a>=0;a--){
			cout << str[a];
		}
		cout << "\n";
	}
	return 0;
}