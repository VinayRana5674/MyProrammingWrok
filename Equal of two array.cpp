#include <iostream> 
#include <algorithm>
#include <vector>      
using namespace std;

bool cmp_string(string i, string j)
{
    return (i.size() == j.size());
}

int main()
{
    int inputs1[] = { 1,2,3,4,5,6,7,8};
    int inputs2[] = { 1,2,1,2,3,4,5,6,7,8};
    
    vector<int>  v1(inputs1 , inputs1+8 );
    vector<int>  v2(inputs2 , inputs2+10 );
    
    cout<<equal(v1.begin(), v1.end(), v2.begin() +2) ;  // prints 0 , boolean false
    
    /* use of compare function */
    string s1[] = { "abc" , "def" , "temp" , "testing" };
    string s2[] = { "xyz" , "emp" , "resr" , "testing" };
    
    cout<<equal( s1 , s1+4 , s2 , cmp_string);   // prints 1 
    /* note that the stings in s1 and s2 are not actually 
    equal but still equal() returns 1 , beacause we are defining 
    equality of two string by their length in cmp_function */
}
