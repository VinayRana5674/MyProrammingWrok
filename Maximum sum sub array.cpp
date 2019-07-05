#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];

        for(i=0;i<N;i++)
        {
            cin>>arr[i];
        }
      vector<int> v;
 		int incl_sum = arr[0],excl_sum = 0; //include first element	 or exclude it
 		int max_sum;
 		for(int i=1;i<N;i++)
 		{
             
 			max_sum = max(incl_sum,excl_sum);
			incl_sum = excl_sum + arr[i]; 
			if(incl_sum>max_sum)
			{
				v.push_back(arr[i])
			}
			// excluded sum is till one before the adjacent element	
			excl_sum = max_sum; // we will take the sum which is larger to obtain maximum sum
		}
		max_sum = ((incl_sum > excl_sum)? incl_sum : excl_sum); 
        	vector<int>::iterator it;
 		for(auto it=v.rbegin();it!=v.rend();it++)
 		{
 			cout<<*it;
		 }
 		
    }

}    
 
