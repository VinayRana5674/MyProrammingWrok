#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[6]={1,2,3,4,5,5};
	all_of(a,a+6,[] (int x){return x%2==0;}) ?cout<<"\nAll are divided by 2": cout<<"\n are not divided by 2";
	any_of(a,a+6,[] (int x){return x%2==0;})? cout<<"\nsome are divided by 2" : cout<<"\n some are not divided by 2";
	all_of(a,a+6,[] (int x){ return x>0;})?  cout<<"\n all are positive" : cout<<"\nelse they are not";
}
