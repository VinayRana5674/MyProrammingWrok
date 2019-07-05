#include<bits/stdc++.h> 
#define MAX 1000000 
using namespace std; 
vector<int> primenumber; 
int binarySearch(int left,int right,int n) 
{ 
    if (left<=right) 
    { 
        int mid = (left + right)/2; 
	if (mid == 0 || mid == primenumber.size()-1) 
	return primenumber[mid]; 
  if (primenumber[mid] == n) 
  return primenumber[mid-1]; 
  if (primenumber[mid] < n && primenumber[mid+1] > n) 
            return primenumber[mid]; 
        if (n < primenumber[mid]) 
            return binarySearch(left, mid-1, n); 
        else
            return binarySearch(mid+1, right, n); 
    } 
    return 0; 
} 
  
int main() 
{ 
	
    int maxi = MAX; 
  int value = sqrt(maxi); 
  int visited_ele[maxi/2+500] = {0}; 
	for (int i=1; i<=(value-1)/2; i++) 
        for (int j=(i*(i+1))<<1; j<=maxi/2; j=j+2*i+1) 
            visited_ele[j] = 1; 
  primenumber.push_back(2); 
  for (int i=1; i<=maxi/2; i++) 
        if (visited_ele[i] == 0) 
            primenumber.push_back(2*i + 1); 
    int n ;
	cin>>n; 
	
    cout << binarySearch(0, primenumber.size()-1, n); 
    return 0; 
} 
