#include <cstdlib> 

#include <iostream> 

#include <iomanip> 

using namespace std; 

int main() 

{ 

 //using Flush manipulator 

 cout << "Hello" << endl; 

 cout << "World" << endl; 

 cout.flush(); 

  cout << "Output Buffer Cleared" << endl; 

  system("PAUSE"); 

  return EXIT_SUCCESS; 

} 
