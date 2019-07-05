#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    float positive=0,negative=0,zero=0;
 
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)
        {
            positive++;
            
        }
        else if(a[i]<0)
        {
            negative++;
        }
        else{
            zero++;
        }

    }
   cout<<setprecision(6)<<(positive/n);
   cout<<"\n"<<setprecision(6)<<(negative/n);
   cout<<"\n"<<setprecision(6)<<(zero/n);

    
}
