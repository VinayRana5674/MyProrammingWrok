#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	s1="My name is vinay rana";
	if(s1.find('z') !=string::npos)
	{
		cout<<"yes";
		
	}
	string s;
	int i;
    getline(cin,s1);
    map<char,int> hash;
    for(i=0;i<s1.length();i++)
    {
        hash[s1[i]]++;
    }
    map<char,int> ::iterator it;
	
}
