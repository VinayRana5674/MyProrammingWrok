#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
int an[n];
int sorteda[n];
int sortedd[n];
copy(a,a+n,sorteda);
copy(a,a+n,sortedd);
sort(sorteda,sorteda+n);
sort(sorteda,sorteda+n,greater<int>());


int k=0;
for(int i=0;i<n;i++)
{
if(k<n)
{
	auto max=max_element(sorteda+i,sorteda+n);

	an[k]=*max;

	k++;}
	if(k<n)
	{
	

	auto min=min_element(sortedd+i,sortedd+n);
	
	an[k]=*min;

	k++;

}
else
{
	break;
}

}
for(int i=0;i<k;i++)
{
	cout<<an[i]<<"  ";
}

}


