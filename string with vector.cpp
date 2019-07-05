#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<string> s;
	int len=0;
	string s1;
	getline(cin,s1);
	s.push_back(s1);
	vector<string> rev;
	vector<string>::iterator it;
	it=s.begin();
	while(it!=s.end())
	{
		++len;
		++it;
	}
	
	cout<<"len is:-"<<len;
}
