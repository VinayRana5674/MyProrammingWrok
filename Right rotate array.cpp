#include<iostream>
using namespace std;
int main()
{
	int n;
    int d;
    cin >> n >> d;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    	}
    for(int i=n-1;i>=0;i--)
    {
    	b[i]=a[((i)-d)%n];
	}
	 for(int i=0;i<n;i++)
        {
        cout<<b[i]<<" ";
    	}
}
