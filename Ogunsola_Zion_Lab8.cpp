 //Zion Ogunsola
 //Lab 8 
 //11/6/2024
 
 
#include <iostream> //Includes iostream
#include <iomanip>  // Includes iomanip
#include <cmath>    // Includes cmath
#include <cctype>   // Includes cctype

using namespace std; 

int doubleMultiply(int a, int b) //Defines function doubleMultiply 
{
    int product;
    product = a * b * 2; //defines variable product
    return product;
}
D
double  getSum(double sum1, double sum2, double sum3) //defines function getSum
{
    double result;
    result = sum1 + sum2 + sum3; //Defines variable result
    return result;
}

int main() //Begins int funCTION
{ 
    double num; // defines variable int
    cout << "Enter a floating point number: " << endl; //outputs statement
    cin >> num; //allows for user input
    
    cout << "The square root of the number is: " << sqrt(num) << endl; //outputs statement
    cout << "The number raised to the 4th power is: " << pow(num, 4) << endl; //outputs statement
    cout << "The floor of the number is: " << floor(num) << endl; //outputs statement

    int num1, num2; //defines variale
   
    cout << "Enter two integers: "; //outputs statement
    cin >> num1 >> num2; //allows for user input

    cout << "Twice the product of the numbers is: " << doubleMultiply(num1, num2) << endl; //outputs statement

    double sum1, sum2, sum3; //defines variables
   
    cout << "Input three real numbers: " << endl; //outputs statement
    cin >> sum1 >> sum2 >> sum3; //allows for user input
    cout << "The sum of your inputs is: " << getSum(sum1, sum2, sum3) << endl; //outpiuts statement

    return 0;
}

/*
 
Enter a floating point number: 
1.2
The square root of the number is: 1.09545
The number raised to the 4th power is: 2.0736
The floor of the number is: 1
Enter two integers: 1 4
Twice the product of the numbers is: 8
Input three real numbers: 
2.5 25 4.3
The sum of your inputs is: 31.8
 
*/