#include<bits/stdc++.h>
using namespace std;

void f(char *k)
{
	k++;
	k[2]='m';
}
int main()
{
    char s[]="hello";
    f(s);
    printf("%c",*s);
}
