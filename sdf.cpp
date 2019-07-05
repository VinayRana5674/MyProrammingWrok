#include<bits/stdc++.h>
using namespace std;

const int N=1e6+10;
int main(){
    int n,dp[N],val[N],max,from[N],max_index;
    bool minus[N];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&val[i]);
        if(val[i]<0){       //just don't take negative elements
            val[i]=0;
            minus[i]=true;
        }
        else minus[i]=false;
    }
    dp[1]=val[1];   // there is no elements to take before 1
    dp[2]=val[2];   //
    from[1]=0;
    from[2]=0;
    max=dp[1];
    max_index=1;
    for(int i=3;i<=n;i++){
        dp[i]=val[i]+max;
        from[i]=max_index;
        if(dp[i-1]>max){    //cause for the element i+1 ,the right most element you can take is i-1
            max=dp[i-1];
            max_index=i-1;
        }
    }
    if(dp[n]>max)max_index=n;
    while(max_index!=0){
        if(!minus[max_index])printf("%d ",val[max_index]);
        max_index=from[max_index];
    }
    printf("\n");
}
