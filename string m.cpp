#include<iostream>
#include<string>
#include<bits/stdc++.h> 
using namespace std;
void occurence(string x)
{
	int freq[26],i;
	for(i=0;i<26;i++)
	{
		freq[i]=0;
	}
int length=x.length();
for(i=0;i<length;i++)
{
	if(x[i]>='a' && x[i]<='z')
	{
		freq[x[i]-97]++;
	}
	
	else if(x[i]>='A' && x[i]<='Z')
	{
		freq[x[i]-65]++;
	}
}
for(i=0;i<26;i++)
{
	if(freq[i]!=0)
	{
		cout<<char(i+97)<<"="<<freq[i];
		cout<<"\n";
	}
}
}
void inputfunction()
{
	string s3;
	getline(cin,s3);
	cout<<s3;
	
	s3.push_back('j');
	cout<<"\n"<<s3;
	
	//s3.pop_back();
	cout<<"\n"<<s3;
}
void capacityfunction(string x)

{
	cout<<"\n"<<x.capacity();
	x.resize(3);
	//x.shrink_to_fit();
	cout<<"\n"<<x;
	x.size();
	x.clear();
	x.empty();
	x.reserve(3);
			}
void itreatorfunction()
{
	string s4("Geeks for Geeks");
	//cout<<"\n"<<s4.begin();
	//cout<<"\n"<<s4.end();
	string::iterator it;
for(it=s4.begin();it!=s4.end();it++)
	{
	cout<<*it;
	cout<<"\n";	
	}
	string::reverse_iterator it1;
	// Reverse of the string
for(it1=s4.rbegin();it1!=s4.rend();it1++)
	{
	cout<<*it1;

	}
	
	
}
void copyfunction()
{
	string s5;
	s5="Vinay";
	char copy[35];
	s5.copy(copy,3,0);
	int i=0;
	while(copy[i]!=0)
	{
		cout<<copy[i];
		i++;
	}
}
occurenceusingfor()
{
	int i,j;
	string str="My name is Vinay rana";
	for(i=0;i<str.length();i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			continue;
		}
		else
		{
		
		str[i]=str[i]+32;}
	}
	for(i=0;i<str.length();i++){
		int count=0;
		for(j=0;j<str.length();j++)
		{
			if(j<i && str[i]==str[j])
			{
				break;
				
			}
			if(str[i]==str[j]){
				count++;
			}
		}
		if(count>0 &&((str[i]>=97 &&str[i]<=122)))
		{
			cout<<"\n"<<str[i]<<"="<<count;
		}
	}
	
}

void elementacces()
{
	
	string s6;
	s6="My name is vinay Rana";
	cout<<s6.at(5);
	//s6.back();
	//s6.front();
	s6.append(" And ");
    s6.erase(s6.begin()+9);
    cout<<"\n"<<s6;
    
    string s7,s8;
    s7="My name";
    s8="Vinay";
    s7.replace(3,4,s8);
    cout<<s7;
	}
int main()
{
	string s1("My name is Vinay rana");
	string s2="Vinay";
	cout<<s1<<"\n";
	
	int i;
	int len=s1.length();
	for(i=0;i<len;i++)
	{
		cout<<s1[i];
	}
	cout<<"\n";
occurence(s1);
/*	cout<<"\n\t\t DOne function occurence";
	inputfunction();
	cout<<"\n\t\t DOne inputfunction";
	capacityfunction(s2);
	cout<<"\n\t\t DOne capacityfunction";
	itreatorfunction();
		cout<<"\n\t\t DOne 	itreatorfunction";*/
	//	copyfunction();
	//	elementacces();
		occurenceusingfor();
}

