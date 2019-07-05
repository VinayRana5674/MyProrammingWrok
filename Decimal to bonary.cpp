#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	while(n>0)
	{
		int rem=n%2;
		v.push_back(rem);
		n=n/2;
	}
	vector<int>::iterator it;
	for(auto it=v.rbegin();it!=v.rend();it++)
	{
		cout<<*it;
	}
	
}
