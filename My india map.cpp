#include <stdio.h>
#include<bits/stdc++.h>
typedef int j;
#define max=10
#define rep(i,n) while(i)
using namespace std;

int main()
{
		system("color C");
	j a = 10, b = 0, c = 10;
	char* str = "TFy!QJu ROo TNn(ROo)SLq SLq ULo+UHs UJq "
				"TNn*RPn/QPbEWS_JSWQAIJO^NBELPeHBFHT}TnALVlBL"
				"OFAkHFOuFETpHCStHAUFAgcEAelclcn^r^r\\tZvYxXyT|S~Pn SPm "
				"SOn TNn ULo0ULo#ULo-WHq!WFs XDt!";
	while (a != 0)
	{
		system("color C");
	a = str[b++];
		while (a-- > 64)
		{
			if (++c == 90)
			{
				c = 10;	 
				putchar('\n');
			}
			else
			{
				if (b % 2 == 0)
					putchar('!');
				else
					putchar(' ');
			}
		}
	}
	return 0;
}
