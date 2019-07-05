#include<bits/stdc++.h>
int main()
{
	std::vector<int> v;
	int n,d;
	std::cin>>n>>d;
	int x;
	for(auto i=0;i<n;i++)
	{
		std::cin>>x;
		v.push_back(x);
	}
	std::cout<<"\nPerforming left\n\n";
	std::rotate(v.begin(),v.begin()+d,v.end());
	std::rotate(v.rbegin(),v.rbegin()+d,v.rend());
	std::rotate(v.begin(),v.begin()-d+n,v.end());
	for(auto i=0;i<n;i++)
	{
		std::cout<<"\n"<<v[i];
	}
}
