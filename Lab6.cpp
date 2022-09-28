#include <iostream> 

using namespace std;

const int size = 10; //constant global size value used for the array
int intArr[size]; //declaring the array for the marks of the students

void swap(int *p, int *q); //declaring swap function with pointers
void displayMark(); // declaring the displayMark function
void markSort(); // declaring the markSort function


int main() // main function that will output all the marks of the students, the ones who passed, and how many failed or passed.
{   
    int pass = 0, fail = 0; // declaring the pass and fail variables

    for (int i = 0; i < 10; i++) // uses for loop to ask user for 10 grade inputs for the students and then stores it into the array
    {
        cout << "Input Mark for Student " << i << ": ";
        cin >> intArr[i];
    }

    cout << endl; // set of output statements that format the result
    cout << "Marks for all the students" << endl;
    cout << "***************************" << endl;

    displayMark(); //calls the display mark function to display all the marks.

    for (int j = 0; j < size; j++) //for loop that counts how mnany of the students passed by iterating through each value in the array and 
                                   // checking if that value is above or equal to 60
    {
        if (intArr[j] >= 60)
        {
            pass++;
        }
    }

    markSort(); // uses bubble sort to order the array in descending order

    cout << endl; // list of output statments used to format the results
    cout << "List of students who passed the course in descending order:" << endl;
    cout << "************************************************************" << endl;

    for (int k = 0; k < pass; k++) // for loop that outputs the values of the students that passed
    {
        cout << "Marks for Student " << k << ": " << intArr[k] << endl; 
    }
    
    fail = size - pass; // gets the amount of people that failed by subtracting the total students by the ones who passed. 

    cout << endl; // list of statements that outputs the results of how many students who passed/failed
    cout << "Class Stats" << endl;
    cout << "************" << endl;
    cout << "Number of students who passed the course: " << pass <<endl;
    cout << "Number of students who failed the course: " << fail << endl;

    return 0;
}

void swap(int *p, int *q) // function used to swap value at x with value at y
{
    int swap = *p;
    *p = *q;
    *q = swap;
}

void displayMark() // goes through the array and outputs each value
{
    for (int i = 0; i < size; i++)
    {
        cout << "Marks for Student "<< i << ": " << intArr[i] << endl;
    }  
}

void markSort() // bubble sort that orders the array in descending order

{
    for (int i = 0; i < size - 1; i++) // creates the amount of iterations
    {
        for (int j = 0; j < size - i - 1; j++) // goes through each value in the array and swaps (j) and (j + 1) values if (j) < (J+1)
        {
            if (intArr[j] < intArr[j + 1])
            {
                swap(&intArr[j], &intArr[j + 1]);
            }
        }
    }
    
}
