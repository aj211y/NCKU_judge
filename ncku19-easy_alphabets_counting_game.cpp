//¼Æ¦r¥À¼Æ
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int count,a;
	while(getline(cin,str)){
		count=0;
		for(a=0;a<str.size();a++){
			if(((str[a]-'\0')>=65&&(str[a]-'\0')<=90) || ((str[a]-'\0')>=97&&(str[a]-'\0')<=122))
				count++;
		}
		cout << count << endl;
	}
	return 0;
}