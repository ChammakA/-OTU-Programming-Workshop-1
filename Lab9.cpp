#include <iostream>
#include <math.h>
#include <cmath> // including the libraries required

using namespace std;

class Circle // creating class Circle
{
    private:
        int radius; // private variable radius
    public:
        int getRadius(); //member function to get the radius
        void setRadius(int r); // member function to set the radius of the circle
        Circle (int r) // constructing the circle
        {
            radius = r;
        }
};

class Square // creating class Square
{
    private:
        int side; // private variable side
    public:
        int getSide(); // memmber function to get the side of the square
        void setSide(int s); // member function to set the side of the square
        Square (int s) // constructng the square
        {
            side = s;
        }
};

int Circle::getRadius() //defining the member function of circle; getRadius
{
    return radius;
}
void Circle::setRadius(int r) // defining the member function of setting what the radius of the circle is
{
    radius = r;
}

int Square::getSide() // defining  the member function of square; getSide
{
    return side;
}
void Square::setSide(int s) // defining the member function of setting what the side of the square is
{
    side = s;
}

string findArea (Circle circle, Square square, string choice); // declaring the findArea function

int main() //main function that asks the user either Circle or Square and then calls findArea to get the area of the desired option
{
    string input, choice;
    cout << "Enter you choice (Circle or Square): "; 
    cin >> input; // prompts user to enter their choice of circle or square and records it

    for (int i = 0; i < input.length(); i++) // for loop used to convert the user input into lowercase string
    {
        choice += tolower(input[i]);
    }

    Circle circle(1); // creates circle object
    Square square(1); // creates square object
    findArea(circle, square, choice); // calls the findArea function

    return 0;

}

string findArea(Circle circle, Square square, string choice) // function that gets the choice inputted by user and then prompts the user 
                                                            // accordingly to find the area of the shape of their choice.
{   
    int input;
    double area;
    if (choice == "circle") // if the user's choice was circle it sets the radius as the radius inputted by the user. It then calculates 
                            // the area by using formula A = PI * r^2 and outputs that result
    {
        cout << "Enter Radius of the Circle: ";
        cin >> input;

        circle.setRadius(input);

        area = M_PI * pow(circle.getRadius(), 2);

        cout << "Area of the Circle: " << area << endl;

    }
    else if(choice == "square")// if the user's choice was square it sets the side as the side inputted by the user. It then calculates 
                            // the area by using formula A = length * width (side * side) and outputs that result
    {
        cout << "Enter the Side of the Square: ";
        cin >> input;

        square.setSide(input);

        area = square.getSide() * square.getSide();
        

        cout << "Area of the Square: " << area << endl;
    }
    else // if the user did not input one of the choices above, the program will output this statement and exit
    {
        cout << "Input is not correct. Please try again." << endl;
        exit;
    }
}
