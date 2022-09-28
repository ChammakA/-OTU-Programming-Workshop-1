#include <iostream> // including libraries

using namespace std; 

void power (int base, int exponent, int *result); // declaring void function

int main() // main function which gets user to input the base and exponent value then calls the power function. Also outputs the result.
{
    int base, exponent, result; // declares the variables used

    cout << "Enter the base value: ";
    cin >> base; // asks user for the base value and records it in base

    cout << "Enter exponent value: ";
    cin >> exponent; // asks user for the exponent value and records it in exponenet

    power(base, exponent, &result); //calls the power function and sends the base, exponent, and the address of result

    cout << "Result: " << result << endl; // outputs the result vale



}

void power(int base, int exponent, int* result) // power function that gets the base and exponent value and records the result
{
    int temp = base; // declares a temp value and records the temp as base

    if (exponent == 0) // if exponent is 0 then the output will always be 1
    {
        *result = 1;
    }
    else{
        for (int i = 1; i < exponent; i++) // runs a for loop that multiplies the temp value by the base exponent times. 
        {
            temp *= base;
        }
        *result = temp;
    }
    
}