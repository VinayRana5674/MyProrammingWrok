#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i*i);
        
 vector<int> ::iterator it;
 for(it=g1.begin();it!=g1.end();it++)
 {
 	cout<<*it<<"\n";
 }
    return 0;
}
