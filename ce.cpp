#include <iostream>    
#include <algorithm> 
#include <vector>
using namespace std;

int main ()
{
    int input[] = {1,2,2,3,4,4,5,6,7,8,10,45};
    vector<int> v(input, input+12);
    
    vector<int>::iterator it1 , it2;
    
    it1 = upper_bound(v.begin(), v.end(), 6); 
    for(it2=it1;it2=v.end();it2++)
    {
    	cout<<it2;
	}
    /* points to eight element in v */ 
    
    it2 = upper_bound(v.begin(), v.end(), 4);
    /* points to seventh element in v */
}
