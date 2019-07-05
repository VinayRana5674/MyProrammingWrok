
#include<bits/stdc++.h>
using namespace std;

void fun(int n)
{
    Stack S;  // Say it creates an empty stack S
    while (n > 0)
    {
      // This line pushes the value of n%2 to stack S
      push(&S, n%2);
 
      n = n/2;
    }
 
    // Run while Stack S is not empty
    while (!isEmpty(&S))
      printf("%d ", pop(&S)); // pop an element from S and print it
}
int main()
{
	int x=fun(11);
	printf("%d",x);
}
