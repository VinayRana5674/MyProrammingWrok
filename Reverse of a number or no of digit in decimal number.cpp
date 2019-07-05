#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int> v;
	cin>>n;
	while(n>0)
	{
		int rem=n%10;
		cout<<rem;
		n=n/10;
	}
}
