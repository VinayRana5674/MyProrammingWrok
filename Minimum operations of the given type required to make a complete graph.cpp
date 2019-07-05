#include<bits/stdc++.h>
using namespace std;
int minreq(int n)
{
	double x=log2(n);
	int ans=ceil(x);
	
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<minreq(n);
}
