#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	getline(cin,s1);
	map<char,int> hash;
	
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]=='-')
		{
			s2=s2+s1[i];
		 	s1.erase(i,1);
			 i--;
			 }
	}
	s1=s2+s1;
	cout<<s1;
}
