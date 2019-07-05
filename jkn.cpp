#include<bits/stdc++.h> 
#define MAX 1000000 
using namespace std; 
vector<int> primenumber; 

int main() 
{ 

    
    int n ;
	cin>>n; 
	int y=n;
	 n = MAX; 
  int value = sqrt(n); 
  int visited_ele[n/2+500] = {0}; 
	for (int i=1; i<=(value-1)/2; i++) 
        for (int j=(i*(i+1))<<1; j<=n/2; j=j+2*i+1) 
            visited_ele[j] = 1; 
  primenumber.push_back(2); 
  for (int i=1; i<=n/2; i++) 
        if (visited_ele[i] == 0) 
            primenumber.push_back(2*i + 1); 
            int a[9]={1,2,6,4,1,4,10,1,14};
    cout<<binary_search(a,a+9,10); 
    
    return 0; 
} 
