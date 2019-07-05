#include<iostream>
#include <stack>
using namespace std;
void checkbalance(string str,int t)
{
	int i;
	cin>>t;
	while(t--)
	{
	cin>>str;
	stack <char> check;
	for(i=0;i<str.length();i++)
	{
		if(str[i]== '(' || str[i]== '{' || str[i]== '[')
		{
			check.push(str[i]);
		}
		else
		{
			if(check.empty())
			{
				cout<<"\nnot balanced";
				break;
			}
			if(str[i]==')')
			{
				if(check.top()!='(')
				{
					cout<<"\nnot balanced";
					break;
				}
				check.pop();
			
			}
			if(str[i]=='}')
			{
				if(check.top()!='{')
				{
					cout<<"\nnot balanced";
					break;
				}
			
				check.pop();
			}
			if(str[i]==']')
			{
				if(check.top()!='[')
				{
					cout<<"\nnot balanced";
					break;
				}
				check.pop();
			}
			
			}
		}
		if(!check.empty())
		{
			cout<<"\nnot balanced";
		}
		else
		{
			cout<<"\nbalanced";
		}
	}
}
int main()
{
	string s;
	int t;
	
	checkbalance(s,t);
}
