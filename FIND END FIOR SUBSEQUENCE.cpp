#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10]={4,5,5,6,4,0,4,5,5,6};
	int a1[4]={4,5,5,6};
	
/*	auto it=find_end(a,a+10,a1,a1+4);
	if(it!=a+10)
	{
		cout<<it-a+1<<"\n";
	}
	else
	{
		cout<<"\nNo";
		
	}	*/
		string s="My name is vinay rana is vinay";
		string s1= "is vinay";
	
//	auto it=find_end(s.begin(),s.end(),s1.begin(),s1.end());// return the last occurece of subsequence
	auto it=search(s.begin(),s.end(),s1.begin(),s1.end());// return first occurence of subsequence
	if(it!=s.end())
	{
		cout<<it-s.begin()+1;
	}
	else
	{
		cout<<"\nNo";
		
	}			
		
	
}
