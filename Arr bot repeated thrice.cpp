#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[7]={12,12,1,1,4,4,5};
	set<int> s(arr,arr+7);
	int arr_sum=accumulate(arr,arr+7,0);
	cout<<arr_sum;
	int set_sum=accumulate(s.begin(),s.end(),0);
	cout<<set_sum;
	cout<<"\nelement which are not repeated thrice are:-"<<(2*set_sum-arr_sum)/2;
}
