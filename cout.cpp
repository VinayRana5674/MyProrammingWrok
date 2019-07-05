#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int l=s.length();
	if(toupper(s[0])!=s[0])
		s[0]=toupper(s[0]);
	for(int i=0;i<l;i++)
	{
		
		
		if(s[i]==' ')
		{
			s[i+1]=toupper(s[i+1]);
		}
		cout<<s[i];
		
	}
}
