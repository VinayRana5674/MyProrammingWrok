#include<bits/stdc++.h>
using namespace std;
int main()
{

      
        string s;
        int n;
        cin>>n>>s;
        
        int level,val=0;
        //string s;n
        //getline(cin,s);
        for(int i=0;i<n;i++)
        { 
                if(s[i]=='U')
                level++;
                if(s[i]=='D')
                level--;
                if(level==0  && s[i]=='U')
                ++val;

        }
        cout<<val;

}

