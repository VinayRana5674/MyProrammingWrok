#include <bits/stdc++.h>

using namespace std;
bool pred(char a,char b)
{
 if(a==b)
        return 1;
        else 
        return 0;
}
int main()
{
        int n;
        cin>>n;
        string s[n];
        string s1[n];
        map<char,int> hash;
        for(int i=0;i<n;i++)
        {
                cin>>s[i];
                auto it=unique_copy(s[i].begin(),s[i].end(), back_inserter(s1[i]),pred);
                
        }
          for(int i=0;i<n;i++)
        {
               cout<<"\n"<<s1[i];
        }

        for (int i = 0; i < n; i++)
        {
                int j=0;
                while(j<s1[i].length())
                {
                       hash[s1[i][j]]++;
                       j++; 
                       
                }
        }
        int count=0;
        for (auto i = hash.begin(); i != hash.end(); i++)
         {
                 cout<<"\n "<<i->first<<" :"<<i->second;

        }
        cout<<count;
}
