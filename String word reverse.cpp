#include<iostream>
#include<string>
using namespace std;
void getinput(string s,int t)
{
	int x=t;
	cin>>x;
	while(x--)
	{
		cin>>s;
		int start;
		int i=s.length()-1;
		int end=i+1;
		string output=" ";
		while( i>=0)
		{
			if(s[i]=='.')
			{
				start=i+1;
				while(start!=end)
				{
					output=output+s[start++];
				}
					output+=".";
					end=i;
			}
			i--;
			
		}
		start=0;
		while(start!=end)
		{
			output=output+s[start++];
		}
		cout<<"\n"<<output;
		
	}
	
}
int main()
{
	string str;
	int n;
	getinput(str,n);
}

