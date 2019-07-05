#include<bits/stdc++.h>
using namespace std;
map<int, int> indextrack;
bool sortbyindex(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second == b.second)
		return indextrack[a.first] < indextrack[b.first];
	return a.second > b.second;
}
void sortbyfreq(int* a, int n)
{
	map<int, int> freq;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
	{
		freq[a[i]]++;
		if (indextrack[a[i]] == 0)
			indextrack[a[i]] = i + 1;
	}


	copy(freq.begin(), freq.end(), back_inserter(v));
	sort(v.begin(), v.end(), sortbyindex);
/*	for(auto it=0;it<v.size();it++)
	{
		cout<<" "<<v[it].first<<" "<<v[it].second<<endl;
	}
	
	cout<<"\n\n\n";
		for(auto it=0;it<v.size();it++)
	{
		cout<<" "<<v[it].first<<" "<<v[it].second<<endl;
	}*/
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].second; j++)

		{
			cout << " " << v[i].first << " ";
			a[i] = v[i].first;
		}
	}

}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (auto i = 0; i < n; i++)
	{
		cin >> a[i];

	}
	sortbyfreq(a, n);

}
