#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	int ans=0;
	int i,j;
	for(i=a.size()-1;i<=0;i++)
	{
		if(a[i]>(i+1)>2)
		{
			cout<<"Too chaotic";
		}
		
		for(j=max(0,a[i]-2),j<i;j++)
		{
			if(a[j]>a[i])
			{
				ans++;
			}
		}
	}
	
}
cout<<ans;
}
