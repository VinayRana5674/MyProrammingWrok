#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int j;
	vector<int> primes;
	for(int i=0;i<=n;i++)
	{
		primes.push_back(1);
	}
	primes[0]=0;// 0 is not prime
	primes[1]=0;//not prime
	for(int i=2;i<=sqrt(n);i++)
	{
		for(j=2;i*j<=n;j++)
		{
			primes[i*j]=0;
		}
	}

	int number_for_near_prime=n;
	if(primes[number_for_near_prime]==1)
	{
		cout<<number_for_near_prime;
	}
	else
	{
		for(int i=number_for_near_prime;i>=0;i--)
		{
			if(primes[i]==1)
			{
				cout<<i;
				break;
			}
		}
		
	}
}
