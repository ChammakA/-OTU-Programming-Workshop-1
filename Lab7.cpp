#include <iostream>
#include <cstring> //including libraries

using namespace std;

bool isNumber(char ch);
bool isUpperCase (char ch);
bool isLowerCase (char ch);

void processData(char text[], int size); //declaring the functions that will be used later


int main() 
{
    string input;
    cout << "Enter some text: ";
    getline(cin, input); //asks user to input a string and stores that entire line into variable input
    
    char charArr[input.length()]; // creates an array with size the length of inputted string
    strcpy (charArr, input.c_str()); // copies that string into the array

    processData(charArr, input.length()); // sends the array and the size into the process data function

    return 0;
}

void processData (char ch[], int size) // This function outputs how many numbers, uppercase, and lowercase are in the string array.
{
    int numCount = 0, upperCount = 0, lowerCount = 0; // declaring count variables.
    for (int i = 0; i < size; i++) // for loop that iterates through each item in the array.
    {
        if (isNumber(ch[i])) // calls the isNumber function and sends ch[i] and if it is true, increases numCount by 1
        {
            numCount++;
        }
        else if (isUpperCase(ch[i])) // calls the isUpperCase function and sends ch[i] and if it is true, increases upperCount by 1
        {
            upperCount++;
        }
        else if (isLowerCase(ch[i])) // calls the isLowerCase function and sends ch[i] and if it is true, increases lowerCount by 1
        {
            lowerCount++; 
        }
    }

    cout << "Count of Numbers: " << numCount << endl;
    cout << "Count of Upper Case: " << upperCount << endl;
    cout << "Count of Lower Case: " << lowerCount << endl; // set of output statements that output the count of numbers, uppercases, and lowercases,

}

bool isNumber(char ch) // a function that recieves a char and returns true if the char value is a digit
{
    return isdigit(ch);
}

bool isUpperCase(char ch) // a function that recieves a char and returns true if the char value is an uppercase letter
{
    return isupper(ch);
}

bool isLowerCase(char ch) // a function that recieves a char and returns true if the char value is a lowercase letter
{
    return islower(ch);
}