#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);
	string s;
	getline(cin,s);
	map<char,int> count;
	for(int i=0;i<s.length();i++)
	{
		if(count[s[i]]==0)
		{
			count[s[i]]=count[s[i]]+1;
			
		}
	}
	map<char,int>::iterator it;
	for(auto it=count.rbegin();it!=count.rend();it++)
	{
		cout<<it->first;
	}
}
