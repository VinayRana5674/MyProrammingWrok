#include<bits/stdc++.h>
using namespace std;
map<int, int> indextrack;
bool sortbyindex(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second == b.second)
		return indextrack[a.first] < indextrack[b.first];
	return indextrack[a.second] > indextrack[b.second];
}
void sortbyfreq(int* a, int n)
{
	map<int, int> freq;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
	{
		freq[a[i]]++;
}
for(auto it=freq.begin();it!=freq.end();it++)
{
	while(it->second!=0)
	{
		cout<<it->first<<" ";
		it->second--;
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
