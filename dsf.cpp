// C++ program to rearrange positive and negative 
// numbers 
#include <bits/stdc++.h> 
using namespace std; 

void rearrange(int a[], int size) 
{ 
	int negative = 0, positive = 1; 

	while (true) { 

		/* Move forward the positive pointer till 
		negative number number not encountered */
		if(negative==0 && a[negative]>0)
		{
			swap(a[positive], a[negative]); 
			continue;
			
		}
		while (positive < size && a[positive] >= 0) 
			positive += 2; 
				while (negative < size && a[negative] <= 0) 
			negative += 2; 

		/* Move forward the negative pointer till 
		positive number number not encountered */
	

		// Swap array elements to fix their position. 
		if (positive < size && negative < size) 
			swap(a[positive], a[negative]); 

		/* Break from the while loop when any index 
			exceeds the size of the array */
		else
			break; 
	} 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 1, -3, 5, 6, -3, 6, 7, -4, 9, 10 }; 
	int n = (sizeof(arr) / sizeof(arr[0])); 

	rearrange(arr, n); 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 

	return 0; 
} 

