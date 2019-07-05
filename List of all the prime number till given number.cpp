#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int j;
	vector<int> primes;
	vector<int> prime_list;
	for(int i=0;i<=n;i++)
	{
		primes.push_back(1);
	}

	primes[0]=0;// 0 is not prime
	primes[1]=0;//not prime
	for(int i=2;i<=sqrt(n);i++)
	{
		if(primes[i]==1)
		{
		
		for(j=2;i*j<=n;j++)
		{
			primes[i*j]=0;
		}
	}}

	
	for(int i=0;i<=n;i++)
	{
		if(primes[i]==1)
		{
			prime_list.push_back(i);
			
		}
	}
	vector<int>::iterator it;
	for(auto it=prime_list.begin();it!=prime_list.end();it++)
	{
		cout<<*it<<"\t";
	}
	
}
