#include <iostream>
#include <fstream>
#include <ctype.h> // Including librararies

using namespace std; 

bool isNumber(char ch);
bool isUpperCase(char ch);
bool isLowerCase(char ch);
void fileProcessing(); // declaring functions

int main() // main method that calls the fileProcessing method
{
    fileProcessing();

    return 0;
}

bool isNumber(char ch) // isNumber method that gets a char value and returns true/false depending on if the char is a digit
{
    string digit = "123456789"; //makes string of all digits

    for (int i = 0; i < digit.length();i++) //iterates through it to see if the char matches and returns true if so
    {
        if (ch == digit[i])
        {
            return true;
        }
    }
    return false;
    
}

bool isUpperCase(char ch) //isUpperCase method which gets a char value and returns true/false depending if the char is an Upper Case letter
{
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // string of all uppercase letters

    for (int i = 0; i < upper.length(); i++) //iterates through and returns true if the char is an upper case letter and false eitherwise
    {
        if (ch == upper[i])
        {
            return true;
        }
    }
    return false;
}


bool isLowerCase(char ch) //isLowerCase method which gets a char value and returns true/false if the char is a lower case letter or not
{

    string lower = "abcdefghijklmnopqrstuvwxyz"; //string of all lower case lets

    for (int i = 0; i < lower.length(); i++) //iterates through and returns true or false depending on if the char is lowercase or not
    {
        if (ch == lower[i])
        {
            return true;
        }
    }
    return false;
}

void fileProcessing() //fileProcessing method which opens and reads a file and iterates through each character in that text. It then 
                      // checks to see if that char is a digit, upper case letter, or a lower case letter. After checking, it will add
                      // to the counter of each. Finally, it outputs the results.
{
    fstream myText;
    myText.open("Lab3Text.txt", ios::in);
    
    char ch;
    int countDigit = 0, countUpper = 0, countLower = 0;

    while (myText>>ch)
    {
        if (isNumber(ch))
        {
            countDigit++;
        }

        else if (isUpperCase(ch))
        {
            countUpper++;
        }
        
        else if (isLowerCase(ch))
        {
            countLower++;
        }
        
    }
    cout << "Number of Digits: " << countDigit << endl;
    cout << "Number of Upper Case Letters: " << countUpper << endl;
    cout << "Number of Lower Case Letters: " << countLower << endl;
    
    
    myText.close();
}