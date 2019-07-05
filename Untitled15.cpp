#include <bits/stdc++.h> 
using namespace std; 

// Function to print permutations of string str 
// using next_permute() 
bool ispalin(string s)
{
int low=0;
int high=s.length()-1;
while(high>low)
{
	if(s[low++]!=s[high--])
	return false;
	
	
}
return true;
}
int main()
{
	string s;
	cin>>s;
	if(ispalin(s))
	{
		cout<<"yes";
	}
	else
	cout<<"\nno";
}
