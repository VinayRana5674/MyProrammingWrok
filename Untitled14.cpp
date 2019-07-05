// C++ program to print all permutations with 
// duplicates allowed using next_permute() 
#include <bits/stdc++.h> 
using namespace std; 

// Function to print permutations of string str 
// using next_permute() 
bool ispalin(string s)
{
int low=0;
int high=s.length()-1;
while(high>low)
{
	if(s[low++]!=s[high--])
	return false;
	
	
}
return true;
}
void permute(string str) 
{ 
	// Sort the string in lexicographically 
	// ascennding order 
	sort(str.begin(), str.end()); 

	// Keep printing next permutation while there 
	// is next permutation 
	do { 

	if(ispalin(str))
	{
			cout << str << endl; 
	}
	} while (next_permutation(str.begin(), str.end())); 
} 

// Driver code 
int main() 
{ 
	string str = "aabbcadad"; 
	permute(str); 
	return 0; 
} 

