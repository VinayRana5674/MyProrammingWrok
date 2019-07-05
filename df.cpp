#include<bits/stdc++.h>
using namespace std;
int main()
{
	
string s1,s2;
s1="656";
s2="87845451511656";
int M=s1.length();
int N=s2.length();
/*int x=s.find(p);
cout<<x;
for(int i=0;i<p.length();i++)
{
	cout<<"\nnow p[i] is:-"<<p[i];
	if(s.find(p[i]))
	{
		cout<<"\n"<<p[i]<<"found";
	}
}*/
void input()
{

   for (int i = 0; i <= N - M; i++) { 
        int j; 
  
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == M) 
            return i; 
    } 
  
    return -1; 
    
    if(input==-1)
    {
    	cout<<"\nNOt present";
	}
	else
	{
		cout<<"\nPresent";
	}
    
}}


