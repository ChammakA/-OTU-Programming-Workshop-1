#include <iostream>

using namespace std;

bool isPerfect(int x);  // declaring isPerfect function
int countPerfect(int y); // declaring countPerfect function

int main() // main function
{
    int number; // declaring number variable used for user input
    int countProper = 0; // the count value for finding the Perfect number

    while (number != -1) // while loop that asks user for a number until they input -1
    {
        cout << "Enter a number (-1 to quit): "; // output statement
        cin >> number; // prompts user input and records it in numbe variable
        if (isPerfect(number)){ // if statement which calls isPerfect and sends it the number variable
            countProper = countPerfect(countProper); // sends countProper to the countPerfect function
        }
    }

    cout << "Total Perfect Numbers: " << countProper; //output statement which lists how many total perfect numbers there were

    return 0;

}

bool isPerfect(int x) // isPerfect function
{
    int total = 0; // declares a sum variable. Used to get the total sum of all a numbers proper divisors
    
    for (int i = 1; i < x; i++) // for loop to check if number is divisor and add it to the sum
    {
        
        if (x % i == 0) // if the statement is true that means i is a proper divisor
        {
            total += i; // adds it to the total sum

        }
        
    }
    if (x == 0){
        total = 1;
    }
    return total == x; // if the total sum is equal to x, then that means that x is a perfect number and returns true, else returns false
    
}

int countPerfect(int y) // function used to count the amount of perfect numbers there are
{
    y++; // adds a 1 to the y value
    return y; // returns the value after the addition
}