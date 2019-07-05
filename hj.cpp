#include<iostream> 
#include<string>  
using namespace std; 
  
void wordReverse(string str,int t) 
{ 
    int x=t;
	cin>>x;
	while(x--)
	{
	cin>>str;
    int i = str.length() - 1; 
    int start, end = i + 1; 
    string result = ""; 
      
    while(i >= 0) 
    { 
        if(str[i] == '.') 
        { 
            start = i + 1; 
            while(start != end) 
                result += str[start++]; 
              
            result += '.'; 
              
            end = i; 
        } 
        i--; 
    } 
    start = 0; 
    
    while(start != end) 
        result += str[start++]; 
      
    cout<<result<<"\n"; }
} 
  
// Driver code 
int main() 
{ 
    string str;
	int t; 
      
    wordReverse(str,t); 
      
    return 0; 
} 
 
