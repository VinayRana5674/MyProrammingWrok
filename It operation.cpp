#include <iostream>     
#include <algorithm>
#include <vector>
#include <utility>
#include<bits/stdc++.h>
using namespace std;

bool cmp_function(int a , int b )
{
    return a+b;
}

int main ()
{
    int values[] = {11,5,5,5,9,6,6,4,4};
    vector<int> v (values,values+9) , v4;
      vector<int>::iterator it;
   
 
    vector<int>::iterator i;
    it = unique(v.begin(), v.end());
    cout<<*it;
    v.resize(distance(v.begin(),it));
    for(i=v.begin();i!=v.end();i++)
    {
    	cout<<"\n:- "<<*i;
	}cout<<"\n stop";
    
    /* vector v is now : 10,5,9,6,4,-,-,-,-  */
    
    /* - indicates that the elements are removed from the vector 
    and next elements are shifted to their position */
    
    /* now it is pointing to the first occurrence of the “-“ in 
    the vector , i.e the position next to the last element (4) */
    
    /* adjusting the size of vector v */
    
    v.resize(distance(v.begin(),it));
    /* resize the vector by the size returned by distance function, 
    which returns the distance between the two iterators  */
    
    /* vector v is now 10,5,9,6,4  */
    
    /* using compare_function */
    
    vector<int> v3(values, values+9);
    
    it = unique(v3.begin(), v3.end(), cmp_function);
    v3.resize(distance(v3.begin(), it));
    
    /* removes copies the duplicate  elements from v3*/
    
    return 0;
}
