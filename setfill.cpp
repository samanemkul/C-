#include <cstdlib> 

#include <iostream> 

#include <iomanip> 

using namespace std; 

int main() 

{ 

    //variable declaration 

int number1, number2, total; 

  //variable initialization 

number1 = 100; 

number2 = 345; 

// expression  

total = number1 + number2; 

//printing output with setw 

 cout << endl; 

 cout << endl; 

cout << setfill('a') << endl; 

cout << setw(5) << number1 << " + " << setw(5) << number2 << " = "  << setw(6) << total << endl; 

system("PAUSE"); 

return EXIT_SUCCESS; 

}
