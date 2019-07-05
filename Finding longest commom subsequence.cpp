#include<bits/stdc++.h>
using namespace std;
string lcs(string x,string y)
{
	int m=x.length();
	int n=y.length();
	int maxlen=0;// keep track on maximum length of commom substring
	int end;// to keep track on ending point of common sub string
	int len[2][n];// DP space reduced to keep track on 2 rows
	int currRow=0;
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0 || j==0 )
			{
				len[currRow][j]=0;
			}
			else if(x[i-1]==y[j-1])
			{
				len[currRow][j]=len[1-currRow][j-1]+1;
				if(len[currRow][j]>maxlen)
				{
					maxlen=len[currRow][j];
					end=i-1;
				}
			}
			else
			{
				len[currRow][j]=0;
			}
		}
		currRow=1-currRow;	
	}
	if(maxlen==0)
	{
		return 0;
	}
	return x.substr(end-maxlen+1,maxlen);
}
int main()
{
	string s,s1;
	cin>>s>>s1;
	cout<<lcs(s,s1);
	
	
}

