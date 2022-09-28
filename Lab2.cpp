#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    srand((unsigned) time(0)); // changes random value
    int answer = (rand() % (1-51)) + 1; // assignms answer variable a random number between 1-50
    int attempt = 0; // declares a counter
    int guess; // declares guess of user

    cout << "Computer has randomly generated a number. If you guess it right in 5 tries, you win!!!" << endl;
        while (attempt < 5) // while loop to make user get 5 tries
        {
            cout << "Guess a number between (0-50): "; // promprs user to input a guess
            cin >> guess;

            if (guess < answer) // if condition to check if the user's input is lower than the generated number
            {
                cout << "Guess is low" << endl;
            }
            else if (guess > answer) // if condition to check if the user's input is higher than the generated number
            {
                cout << "Guess is high" << endl;
            }
            else // this would run if the user has guess right
            {
                cout << "You guessed it right!!!" << endl;
                return 0;
            }
            attempt++; // increases attempt counter
        }
        
        cout << "You lost!!!" << endl; // outputs after while loop
        cout << "The number was: " << answer; // reveals answer to user

    return 0;

}