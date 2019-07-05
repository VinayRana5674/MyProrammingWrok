#include<iostream> 
#include<algorithm> // for copy_if() and copy_backward() 
#include<vector> 
using namespace std;a 
  
int main() 
{ 
      
    // intializing source vector  
    vector<int> v1 = { 1, 5, 6, 3, 8, 3 }; 
          
    // declaring destination vectors 
    vector<int> v2(6); 
    vector<int> v3(6); 
          
    // using copy_if() to copy odd elements 
    copy_if(v1.begin(), v1.end(), v2.begin(), [](int i){return i%2!=0;}); 
          
    // printing new vector 
    cout << "The new vector elements entered using copy_if() : "; 
    for(int i=0; i<v2.size(); i++) 
    cout << v2[i] << " "; 
          
    cout << endl; 
          
    // using copy_backward() to copy 1st 4 elements 
    // ending at second last position 
    copy_backward(v1.begin(), v1.begin() + 4, v3.begin()+ 5); 
          
    // printing new vector 
    cout << "The new vector elements entered using copy_backward() : "; 
    for(int i=0; i<v3.size(); i++) 
    cout << v3[i] << " "; 
  
} 
