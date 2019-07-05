#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int a[10]={1,2,1,3,4,5,7,7,8,9};
	int visited[10]={0};

		int coun=count_if(a,a+10,[] (int x){return x%2==0;});
		cout<<coun;
	
	
	
		
}
