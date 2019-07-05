#include <iostream>
#include <stdio.h>
using namespace std;

int t;
int n;

int MIN(int a,int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int MAX(int a,int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int i;
    int test;

    scanf("%d",&t);

    for (test=1;test<=t;test++)
    {
        scanf("%d",&n);

        int pos = 0;
        int neg = 0;

        for (i=1;i<=n;i++)
        {
            int a;

            scanf("%d",&a);

            if (a < 0)
                neg++;
            else
                pos++;
        }

        if (neg == 0)
            printf("%d %d\n",pos,pos);
        else if (pos == 0)
            printf("%d %d\n",neg,neg);
        else
            printf("%d %d\n", MAX(neg,pos), MIN(neg,pos));
    }

    return 0;
}

