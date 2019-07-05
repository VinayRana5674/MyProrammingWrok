#include<iostream>
#include<cstdlib>
using namespace std;
void solution(int **arr,int n)
{
    
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int i,j,sum=0;
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"\nAt index arr "<<i<<j<<" Element is- "<<arr[i][j];
        }
    }
    */
    int sumfirstdiagonal=0;
    int sumseconddiagonal=0;
    for(int i=0;i<n;i++)
    {
    sumfirstdiagonal=sumfirstdiagonal+arr[i][i];
        
    
    }
    int x=0;
     for(int i=n-1;i>=0;i--)
    {
        
        //cout<<"\n\n i is:-"<<i;
        //cout<<"\n\n x is:-"<<x;
        //cout<<"\n\n\nADding:-"<<sumseconddiagonal+arr[i][x];
    sumseconddiagonal=sumseconddiagonal+arr[i][x];
    //cout<<"\nNOw sumseconddiagonal+arr[i][x] is"<<sumseconddiagonal;
   x++;
        
    
    }
    //cout<<"\nsumseconddiagonal:-"<<sumseconddiagonal;
    //cout<<"\nsumfirstdiagonal:-"<<sumfirstdiagonal;
    cout<<abs(sumseconddiagonal-sumfirstdiagonal);
/* for(i=0;i<n;i++)
    {
        i++;
        for(j=i+1;j<=n;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    cout<<"\n\nis"<<sum;*/
    
}

