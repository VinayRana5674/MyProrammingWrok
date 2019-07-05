
#include <bits/stdc++.h> 
using namespace std; 

int maxLength(int a[], int n) 
{ 
	int sum = 0, len = 0; 

	// Check if sum of complete array is even 
	for (int i = 0; i < n; i++) 
		sum += a[i]; 

	if (sum % 2 == 0) // total sum is already even 
		return n; 


	for (int i = 0; i < n; i++) { 
		if (a[i] % 2 == 1) 
			len = max(len, max(n - i - 1, i)); 
	} 

	return len; 
} 

// Driver Code 
int main() 
{ 
	int a[] = { 1, 2}; 
	int n = sizeof(a) / sizeof(a[0]); 

	cout << maxLength(a, n) << "\n"; 

	return 0; 
} 

