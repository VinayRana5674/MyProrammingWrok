#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
int main()
{
        
        int t;
        cin>>t;
        while(t--)
        {
                int R,C,r,c,i,j;
                cin>>R>>C;
                string str[R];
                for(i=0;i<R;i++)
                {

                        cin>>str[i];
                }
                /*cin>>r>>c;
                string ptr[r];
               /* for(i=0;i<r;i++)
                {

                        cin>>str[i];
                }
                for(i=0;i<R;i++)
                {
                    for(j=0;i<r;j++) 
                    {

                    }   
                        
                }*/
               for(i=0;i<R;i++)
                {
				for(j=0;j<C;j++)
                {

                        cout<<"\n"<<i<<" String "<<j<<" char -"<<str[i][j];
                } 
                        
        }}}

