#include<bits/stdc++.h>
using namespace std; 
  
int main() 
{ 
    // Initializing vector with array values 
    int arr[] = {5,56,65,7,8,97, 10, 15, 20, 20, 23, 42, 45}; 
    
    int n = sizeof(arr)/sizeof(arr[0]); 
    vector<int> vec(arr,arr+n);
    sort(vec.begin(),vec.end());
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
    for (int i=0; i<n; i++) 
        cout << vec[i] << " ";
	 
    
}
