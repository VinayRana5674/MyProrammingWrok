#include <iostream>     
#include <utility>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main ()
{
    vector <int> v, c;
    for(int j=0; j < 10; j++)
    {
        v.push_back(j);
        c.push_back(j+1);
    }
    
    swap_ranges(v.begin(), v.begin()+5, c.begin());
    
    /* swaps the first five element of 
    vector v by the elements of vector c */
    
    for(vector<int>::iterator i = v.begin(); i!= v.end(); i++)
    cout<< *i <" ";
    
    cout<<endl;
    
    for(vector<int>::iterator k = c.begin(); k!= c.end(); k++)
    cout<<*k<<" ";
}
