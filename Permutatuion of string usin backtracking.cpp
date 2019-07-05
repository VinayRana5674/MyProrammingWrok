#include<bits/stdc++.h>
using namespace std;
void permute(string a,int l, int r)
{
	if(l==r)
	cout<<a<<endl;
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap(a[l],a[i]);
			permute(a,l+1,r);
			swap(a[l],a[i]);
		}
	}
}
int main()

{
	int n;
	cin>>n;
	
	string str[5];
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
	}
	for(int i=0;i<n;i++)
		permute(str[i],0,str[i].length()-1);
}
