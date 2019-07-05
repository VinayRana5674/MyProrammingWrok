#include<bits/stdc++.h>
typedef int k;
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef vector<int> v;
int main()

{
	v v1,v2;
	int n,i;
	cin>>n;
	rep(i,n)
	{
		int x;
		cin>>x;
		v1.push_back(x);
	}
	int n2;
	cin>>n2;
	rep(i,n2)
	{
		int y;
		cin>>y;
		v2.push_back(y);
	}
	v::iterator it;
	it=search(v1.begin(),v1.end(),v2.begin(),v2.end());
	cout<<"\n\n\n"<<*it;
}
