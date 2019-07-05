#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(i=0;i<n;i++)
typedef int ii;
int main() 
{
	std::ios_base::sync_with_stdio(false);
	ii n,i,x;
	cin>>n;
	vector<int> v;
	map<int,int> hash;
	rep(i,n)
	{
		cin>>x;
		v.push_back(x);
	}
	rep(i,n)
	{
		x=count(v.begin(),v.end(),v[i]);
		if(hash[v[i]]==0)
		{
			hash[v[i]]=x;
			
		}
	
	}
	for(auto ip=hash.begin();ip!=hash.end();ip++)
	{
		cout<<ip->first<<" : "<<ip->second;
	}
	// returning unique 
}
