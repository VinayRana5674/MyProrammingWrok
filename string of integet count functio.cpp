#include<bits/stdc++.h>
using namespace std;
int main()
{	int t;
	cin>>t;
	while(t--)
	{
	
	string s ;
	getline(cin,s);
	int len=s.length();
	char c[len];
		for (int i = 0; i < len; i++)
	{
	c[i]=s[i];

	}
	
	for (int i = 0; i < len; i++)
	{
		int coun=0;
		coun=count(c,c+len,c[i]);
		cout<<"\n"<<c[i]<<"-"<<coun;
	}}	
}
