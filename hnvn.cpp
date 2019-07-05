//VINAY C++
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{	
	string s,rev;
	int flag=0,len=0,i=0,j;

	getline(cin,s);
	while(s[i]!='\0'){

		len++;
		i++;
		
		}

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

