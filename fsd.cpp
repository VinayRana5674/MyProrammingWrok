#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int> a;
	for(int i=0;i<5;i++)
	{
		a.push_back(i*i);
	}
	for(int i=0;i<5;i++)
	{
	cout<<"\n"<<a[i];
	}
	sort(a.begin(),a.end());
	for(int i=0;i<5;i++)
	{
	cout<<"\n"<<a[i];
	}
	
}

