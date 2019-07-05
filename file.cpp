#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  ofstream filestream("testout.txt");  
  if (filestream.is_open())  
  {  
    filestream << "Welcome to javaTpoint.\n";  
    filestream << "C++ Tutorial.\n";  
    filestream.close(); 
	cout<<"\nSuccefully return"; 
  }  
  else cout <<"File opening is fail.";  
  return 0;  
}  
