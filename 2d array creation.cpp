// Array with two dimension suppose we have two subjects and 5 students and want to make array
//Subject       Student 1   Student 2     Student 3   Student 4   Student 5
//maths         78          45            75          89          45
//english       58          48            78          56          65
// a[2][5]
// two rows snd 5 column
//need to give bot row and column
// need to give column neccessarily
//int a[2][2] = { 1, 2, 3, 4 }; /* valid */ 
//int a[ ][2] = { 1, 2, 3, 4 }; /* valid */ 
//int a[2][ ] = { 1, 2, 3, 4 }; /* invalid */ 
//int a[ ][ ] = { 1, 2, 3, 4 }; /* invalid */ 
#include<iostream>
using namespace std;
int getdata()
{
	
}
int dislpaydata()
{
	
}
int main()
{
	int i;
	int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11};
	cout<<x[0][2];
	 int y[2][3][2] =  { 
        { {0,1}, {2,3}, {4,5} }, 
        { {6,7}, {8,9}, {10,11} } 
    }; 
  
    // output each element's value 
    for (int i = 0; i < 2; ++i) 
    { 
        for (int j = 0; j < 3; ++j) 
        { 
            for (int k = 0; k < 2; ++k) 
            { 
                cout << "Element at y[" << i << "][" << j 
                     << "][" << k << "] = " << y[i][j][k] 
                     << endl; 
            } 
        } 
    } 

}
