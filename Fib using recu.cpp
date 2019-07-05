#include<bits/stdc++.h>
using namespace std;
int fib_using_recu(int n)
{
	if(n<=1)
	return n;
	return  fib_using_recu(n-1)+fib_using_recu(n-2);
}

int main()
{
int n;
 cin>>n;
 cout<<fib_using_recu(n);	
}
