#include<bits/stdc++.h>
typedef int k;
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);
	k a[6]={4,5,6,8,9,6};
	k b[6]={8,9,5,16,4,6};
	if(is_permutation(a,a+6,b))
	{
		cout<<"\nIt is";
	}
	else
	{
		cout<<"\nNot";
	}
}
