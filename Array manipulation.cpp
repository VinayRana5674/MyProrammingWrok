#include<bits/stdc++.h>
using namespace std;

int main()
{
       long int j,i,N,M,a,b,k,max=0;
       cin>>N>>M;
       long int *ar = new long int[N]();
       for(i=0;i<M;i++)
       {
       		cout<<"\ngoping through i "<<i;
              cin>>a>>b>>k;
              //cout<<"\n looping through i="<<i;
              ar[a-1] = ar[a-1] + k;
              //cout<<"\nchanged "<<ar[a-1];
              if(b<N)
              {
              	 cout<<"\nB is:"<<b;
                     ar[b] = ar[b] - k;
                     cout<<"aar[b] is now:"<<ar[b];
              }
              cout<<"\nending to i: "<<i;
       } 
       k = 0;
       for(i=0;i<N;i++)
       {
              k = k + ar[i];
              if(k>max)
              {
                     max = k;
              }
       }
       
       cout<<max<<endl;
       for(i=0;i<N;i++)
       {
       	cout<<"\n\n\n\n"<<ar[i];
	   }
       return 0;
}

