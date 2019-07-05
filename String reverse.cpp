#include<iostream>
#include<string>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
	
	string s;
	getline(cin,s);
	cout<<s;
	int end=s.length()+1;
	int start;
	string result="";
	for(int i=s.length()-1;i>=0;i--)
	{
		if(s[i]=='.')
		{
		 start=i+1;
		 while(start!=end)
		 {
		 	result+=s[start++];
		 }
		 result+=".";
		 end=i;
		}
		
	}
	start=0;
	while(start!=end)
	{
			result+=s[start++];
	}
	cout<<"\n"<<result;
}
}
