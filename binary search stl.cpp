#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(1);
		v.push_back(6);
			v.push_back(7);
				v.push_back(8);
					v.push_back(81);
	int ar[5]={1,7,4,8,5};
	sort(ar,ar+5);
	
	int y=binary_search(ar,ar+5,7);
	cout<<y;
	sort(v.begin(),v.end());
	int x=(binary_search(upper_bound(v.begin(),v.end(),58));
	cout<<x;
}


