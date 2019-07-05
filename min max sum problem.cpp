#include <bits/stdc++.h>
#include<vector>
using namespace std;

vector<string> split_string(string);

// Complete the miniMaxSum function below.
int main() {
	
     int maxsum=0;
     int arr[5];
    int minsum=0;
    int i,j,temp;
    for(i=0;i<5;i++)
    {
    	cin>>arr[i];
	}
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
     for(i=0;i<5;i++)
    {
    	cout<<"\n\n\n\n\t :-"<<arr[i]<<"\t\t";
	}
    for(i=0;i<4;i++)
    {
        minsum=minsum+arr[i];
    }
    for(i=1;i<5;i++)
    {
        maxsum=maxsum+arr[i];
    }
    cout<<minsum<<" "<<maxsum;
    }



