#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    
for(int i=0;i<n;i++)

{
    int x=(n)-(i+1);
    string str3(x,' ');
    int y=i+1;
    string str4(y,'#');
    string str5=str3+str4;
    cout<<str5<<"\n";


}

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

