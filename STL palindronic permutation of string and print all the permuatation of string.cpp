#include <bits/stdc++.h> 
using namespace std; 
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
	sort(str.begin(), str.end()); 
	do { 
	if(ispalin(str))
	{
			cout << str << endl; 
	}
	} while (next_permutation(str.begin(), str.end())); 
} 
int main() 
{ 
	string str = "aabbcadad"; 
	permute(str); 
	return 0; 
} 

