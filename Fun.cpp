#include<bits/stdc++.h>
using namespace std;
void fun(int n)
{
  int count = 0;
  for (int i = n; i > 0; i /= 2)
  {
  
     for (int j = 0; j < i; j++)
       {
		 count += 1;
        cout<<"\n"<<count;}}

}
int main(){
	fun(10);
}
