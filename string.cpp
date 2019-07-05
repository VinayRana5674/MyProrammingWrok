#include <bits/stdc++.h>
using namespace std;
void getstring(string str)
{
    	int length=str.length();
	for(int i=0;i<length;i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
		str[i]=='o' || str[i]=='u' || str[i]=='A' ||
		str[i]=='E' || str[i]=='I' || str[i]=='O' ||
		str[i]=='U')
		{
			for(int j=i;j<length;j++)
			{
				str[j]=str[j+1];
			}
			length--;
		}
		
	}
	cout<<"After deleting string is:-"<<str;
}
int main()
{ string x;

	cout<<"PLease enter the string-\n";
	cin>>x;
	getstring(x);
	
}
