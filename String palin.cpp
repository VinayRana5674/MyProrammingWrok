//VINAY C++
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
int main()
{	
	string s,rev;
	int flag=0;
	
	getline(cin,s);
	int len=s.length(),i;
	for(i=len-1;i>=0;i--)
	{
		rev=rev+s[i];
		
	}
	if(rev==s)
	{
		cout<<"\npalindrone";
		
		
	}
	else
	{
		cout<<"\nVERY VERY NOT PALINDRONE";
		flag=1;
	}
	
	// making it palindrone
	if(flag==1)
	{
		cout<<"\nMaking the string palindrone";
		string palin_string=s+rev;
		cout<<"\nNow "<<s+rev<<" is palindrone";
	}

}

