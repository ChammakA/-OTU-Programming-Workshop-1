#include <iostream>

using namespace std;

int main()
{
    string name;
    int birthYear;
    float hourlyWage;
    int currentYear = 2021;

    cout << "Enter Job Applicant's Name: ";
    cin >> name;

    cout << "Enter Job Applicant's Birth Year: ";
    cin >> birthYear;

    cout << "Enter Job Applicant's Hourly Wage: ";
    cin >> hourlyWage;

    int age = currentYear - birthYear;

    cout << "********************************** \n";
    cout << name << " is " << age << " years old and requests an hourly wage of $" << hourlyWage;
    

    return 0;

}