#include <bits/stdc++.h>

using namespace std;
int main() {
    int m, n;
   map<string, int> magazine;
    string word;

    cin >> m >> n;

    /* Read magazine. */
    for (int i = 0; i < m; ++i) {
       cin >> word;
       magazine[word]++; // (zero) value-initialized
    }
    
    /* Read ransom note. */
    for (int j = 0; j < n; ++j) {
        cin >> word;
        if (--magazine[word] < 0) { // (zero) value-initialized
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    return 0;
}
