#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
	int n, i, j;
	cin >> n;
	int x[15];
	int freq[15] = { 0 };
	// without creating aux space
	for (i = 0; i < n; i++)
	{
		cin >> x[i];
	}

	for (i = 0; i < n; i++)
	{
		int count = 0;
		for (j = 0; j < n; j++)
		{
			if (j < i && (x[i] == x[j]))
			{
				break;

			}
			if (x[i] == x[j])
			{
				count++;
			}

		}
		if (count > 0)
		{
			cout << "\n" << x[i] << ":" << count;
		}
	}
	// with aux space

	for (i = 0; i < n; i++)
	{
		int count = 0;
		for (j = 0; j < n; j++)
		{
			if (x[i] == x[j])
			{
				count++;
				freq[j] = 0;
			}

		}
		if (count > 0)
		{
			freq[i] = count;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (freq[i] > 0)
		{
			cout << "\n\n\n\n\n" << x[i] << ":" << freq[i];
		}
	}


	// using count functio
	int co[15] = { 0 };
	unordered_map<int, int> hash;

	for (i = 0; i < n; i++)
	{
		int c = count(x, x + n, x[i]);
		hash[x[i]] = c;
	}
	unordered_map<int, int>::iterator it;
	for (it = hash.begin(); it != hash.end(); it++)
	{
		cout << "\n" << it->first << " :" << it->second << "\n";
	}





}
