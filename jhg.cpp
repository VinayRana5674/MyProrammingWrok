#include <iostream>   
#include <algorithm>   
#include <string>   
using namespace std;   
    
// declaring a BinaryFunction   
bool Pred(char a, char b)   
{   
    // It checks if the both the arguments are same and equal   
    // to 'v' then only they are considered same and duplicates are removed   
    if (a == b )    
    {   
        return 1;   
    }    
    else   
    {   
        return 0;   
    }   
}   
int main()   
{   
    // Declaring a string   
    string s = "You arre vvvisiting vvvogie bbogie", s1;   
    
    // Using std::unique_copy to remove the consecutive   
    // v in the word and copy it to s1   
    auto ip = unique_copy(s.begin(), s.end(), back_inserter(s1), Pred);   
    
    cout << "Before: " << s;   
    
    // Displaying the corrected string   
    cout << "\nAfter: " << s1;   
    return 0;   
}  
