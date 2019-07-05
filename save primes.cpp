#include<bits/stdc++.h>
using namespace std;
int main()
{
	//std::ios_base::sync_with_studio(false);
	int n;
	cin>>n;
	int j;
	vector<int> primes;
	for(int i=0;i<=n;i++)
	{
		primes.push_back(1);
	}
	primes[0]=0;
	primes[1]=0;
	for(int i=0;i<=n;i++)
	{
		cout<<primes[i]<<"\n";
	}
	for(int i=2;i<=sqrt(n);i++)
	{
		for(j=2;i*j<=n;j++)
		{
			primes[i*j]=0;
		}
	}
	for(int i=0;i<=n;i++)
	{
		if(primes[i]==1)
		{
			cout<<i<<" is "<<"prime\n";
		}
		else
		{
			cout<<i<<" is not"<<"prime\n";
		}
	}
	int number_for_near_prime=n;
	if(primes[number_for_near_prime]==1)
	{
		cout<<"\nalready";
	}
	else
	{
		for(int i=number_for_near_prime;i>=0;i--)
		{
			if(primes[i]==1)
			{
				cout<<"\nNearest prime number is "<<i;
				break;
			}
		}
		
	}
}
