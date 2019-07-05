#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s1,s2;
		cin>>s1;
		cin>>s2;
		string letters="abcdefghijklmnopqrstuvwxyz";
		string outpt="NO";
		for(int i=0;i<letters.length();i++)
		{
			if(s1.find(letters[i])!=string::npos && s2.find(letters[i])!=string::npos)
			{
				output="YES\n";
				break;
			}
		}
		cout<<"NO\n";
	}
}
