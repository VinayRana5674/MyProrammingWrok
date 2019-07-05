#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="-----sdsds---ffsd--sdfgd";
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='-')
		{
			count++;
			s.erase(i,1);
			i--;
		}
	}
	//char c='\040';
	//replace(s.begin(),s.end(),'-',c);
	string s1(count,'-');
	s=s1+s;
	//string s2=s1+s;
	cout<<s;
}
