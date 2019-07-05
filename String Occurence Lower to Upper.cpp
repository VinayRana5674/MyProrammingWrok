#include<iostream>
#include<string>
using namespace std;
void occurencemix(string s)
{
	cout<<s<<"\n";
	cout<"\t\t\t\t Occurencemix()";
	int i;
	int freq[26]={0};

	for(i=0;i<s.length();i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			freq[s[i]-97]++;
		}
		else if(s[i]>='A' && s[i]<='Z')
		{
			freq[s[i]-65]++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(freq[i]!=0)
		{
			cout<<char(i+97)<<"-"<<freq[i];
			cout<<"\n";
		}
	}
}
void occurenceseprate(string s)
{
	cout<<s<<"\n";
	cout<"\t\t\t\t OccurenceSeprate()";
	int freq_upper[26]={0};
	int freq_lower[26]={0};
	int i;
	for(i=0;i<s.length();i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			freq_lower[s[i]-97]++;
		}
		else if(s[i]>='A' && s[i]<='Z')
		{
			freq_upper[s[i]-65]++;
		}
	}
	for(i=0;i<26;i++)
	{
		int j=i;
		if(freq_lower[i]!=0 )
		{
			cout<<"\n"<<char(i+97)<<"="<<freq_lower[i];
			
			
		}
		if(freq_upper[j]!=0)
		{
			
			cout<<"\n"<<char(j+65)<<"="<<freq_upper[i];
			
		}
	}

}
	
occurenceusingfor(string x)
{
	cout<<x<<"\n";
	cout<"\t\t\t\t OccurenceFor()";
	int i,j;
	for(i=0;i<x.length();i++)
	{
		if(x[i]>=97 && x[i]<=122)
		{
			continue;
		}
		else
		{
			x[i]=x[i]+32;
		}
	}
	for(i=0;i<x.length();i++)
	{
		int count=0;
		for(j=0;j<x.length();j++)
		{
			cout<<" j is "<<j<<"\n ";
				cout<<" i is "<<j<<"\n";
			if(j<i &&(x[i]==x[j]))
			{
				cout<<" j is "<<j<<"\n ";
				cout<<" i is "<<j<<"\n";
				
				break;
			}
			if(x[i]==x[j])
			{
				count++;
			}
		}
		if(count>0 &&(x[i]>=97 && x[i]<=122))
		{
			cout<<"\n"<<x[i]<<"="<<count;
		}
	}
}

int main()
{
	string str;
	getline(cin,str);
/*	occurencemix(str);
/*	occurenceseprate(str);*/
	occurenceusingfor(str);
}
