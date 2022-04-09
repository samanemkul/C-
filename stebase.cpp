#include <cstdlib> 

#include <iostream> 

#include <iomanip> 

 using namespace std; 

 int main() 

{ 

    //Variable Declaration 

    int A,B,C; 

    //Variable Initialization 

    A = 2078; 

   B = 3067; 

   // Computing C 

    C = A + B;  

   // Printing Results  

 cout << "A =" << dec << A <<endl;

 cout << "B =" << oct << B << endl; 

cout << "C = " << setbase(16) << C << endl;

system("PAUSE"); 

return EXIT_SUCCESS; 

} 
