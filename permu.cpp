#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int n,t;
	cin>>t;
	while(t>0)
	{
	    string str;
	    cin>>str;
	    sort(str.begin(),str.end());
	    cout<<str<<' ';
	    while(next_permutation(str.begin(),str.end()))
	        cout<<str<<' ';
	    cout<<'\n';
	    t--;
	}
	return 0;
}
