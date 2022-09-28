#include <iostream>
#include <string> // Including the string library

using namespace std; 



int main() // main function that records what the address is and then separates each part of the address by the comma. 
           //E.g street, city, province, etc.
{
    string address; // declaring address
    cout << "Please input an address in the format (Street, City, Province, Postal Code, Country): ";
    getline (cin, address); //asks user for input and gets the whole address as string

    string mark = ", "; // declaring the mark at which we separate the address by. In this case, with a comma followed by space.
    size_t position; // this will find the position of where the mark is
    string street, city, province, postalCode, country, temp; // declaring string variables
    temp = address;

    for (int i = 0; i < 5; i++) // a for loop that is used to iterate through the address as well as make a counter to know what to separate
    {
        position = temp.find(mark); // through each iteration find the position of the mark in the original string

        if (i == 0) //if this is the first iteration it will take the street from the addresss
        {
            street = temp.substr(0, position);
        }

        else if (i == 1) // the second iteration where the city will be recorded from the address
        {
            city = temp.substr(0, position);   
        }

        else if (i == 2) // the third iteration where provnce is taken
        {
            province = temp.substr(0, position);   
        }

        else if (i == 3) // the fourth iteration where the postal code is recorded
        {
            postalCode = temp.substr(0, position);   
        }

        else if (i == 4) // the fifth iteration where the country is taken
        {          
            country = temp.substr(0, position);
            
        }
        temp = temp.substr(position + mark.length()); // after every iteration, it will "remove" the previous segment 
                                                            // of the string before the mark. e.g. "A, Word." -> "Word."
    }

    // Group of print statements
    cout << "Address: " << address << endl;
    cout << "********************************************************" << endl;
    cout << "Street: " << street << endl;
    cout << "City: " << city << endl;
    cout << "Province: " << province << endl;
    cout << "Postal Code: " << postalCode << endl;
    cout << "Country: " << country << endl;

    return 0;
}