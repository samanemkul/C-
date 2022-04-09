#include <cstdlib> 

#include <iostream> 

#include <iomanip> 

using namespace std; 

 

int main() 

{ 

    //variable declaration 

    float number1; 

     

    //variable initialization 

number1 = 34.3358; 

     

    //display the number using setprecision() 

    cout << number1 << endl; 

    cout << setprecision(2) << number1 << endl; 

    cout << setprecision(5) << number1 << endl; 

    system("PAUSE"); 

    return EXIT_SUCCESS; 

} 
