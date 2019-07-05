#include<bits/stdc++.h>
using namespace std;
int countpairs(string s)
{
	set <char> st;	
	string vowel="aeiou";	int j=0;
	for(int i=0;i<vowel.length();i++)
	 	st.insert(vowel[i]);
	
	int count=0;
	for(int i=0;i<s.length()-1;i++)
	{
	//	if( st.find(s[i])   == st.end() && st.find(s[i+1])!=st.end())
	//		count++;

	if(st.find(s[i])==st.end())
	{
	while(st.find(s[j])!=st.end())
	{
		j++;
		count++;
	}
	}
		
	}
	
	return count;
}
int main()

{
	string s;
	cin>>s;
	cout<<countpairs(s);
}
