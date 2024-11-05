//Zion Ogunsola
//Lab 8
//11/4/2024


#include <iostream>  // Include for input and output operations
#include <cmath>      // Include for mathematical functions
#include <cctype>     // Include for character handling functions
#include <iomanip>    // Include for manipulators used to format output

using namespace std; // Makes all the names in the std namespace available
int doubleMultiply(int a, int b)
    
  {
    int product;
    product = a*b*2;
    return product;
 }



int main() {


    int num; // Variable to store an integer

    cout << "Enter a floating point number: " <<endl;
    cin >> num;

    cout << "The square root of the number is: " << sqrt(num) << endl;
    cout << "The number raised to the 4th power is: " << pow(num,4) << endl;
    cout << "The floor of the number is: " << floor(num) << endl;
     
  
   int num1, num2;
   cout << "Enter two integers: ";
   cin >> num1 >> num2;
   cout << "Twice the product of the numbers is: " << doubleMultiply(num1, num2) <<endl;

   return 0;

}
 