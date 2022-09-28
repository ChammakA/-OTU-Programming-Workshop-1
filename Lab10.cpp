#include <iostream>
#include <string> //inclusing libraries. 

using namespace std;

struct Node // creating a Node for the stack that will store a char. 
{
    char chInfo;
    Node* next; // pointer to next node
};

class paliStack // creates the stack used.
{
    Node* top; // pointer to top of the stack
    public:
        paliStack() // initializes the stack.
        {
            top = NULL;
        };
        ~paliStack() // used to delete the stack.
        {
            while (!isEmpty())
            {
                pop();
            }
        };

        bool isEmpty() // checks to see if the stack is empty.
        {
            return (top == NULL);
        };

        void push(char ch) // gets a char value and then puts it at the top of the stack while moving the other values "down"
        {
            Node *newTop = new Node; // create a node
            newTop->chInfo = ch;     // makes newTop have the inputted ch
            newTop->next = top;      // goes to the next node and makes its value the current tops value

            top = newTop; // makes the newly inputted value the top of the stack
        };

        char pop() // removes the value at the top of the stack and reorganized what the top value is
        {
            if (isEmpty()) // checks to see if the staack is empty and if it is, will exit.
            {
                exit;
            }
            else
            {
                char val = top->chInfo; // put the top value into variable
                Node* prevTop = top;    // Makes a node that records what the current top is
                top = top->next;        // makes the value below the new top

                delete prevTop;        // deletes what is at the top of the stack
                return val;           
            }
        };

        string strOutput() //used to output the reversed string
        {
            string output = ""; 
            Node *current = top; //makes pointer to top of stack
            while (current != NULL) // iterates through each item in the stack
            {
                output += current->chInfo; //records the the iterations into a string. (is in reversed order because of how stacks work)

                current = current->next; // goes to next node
            }
            return output;
        };

};

int main()
{   
    string strInput;
    paliStack *temp = new paliStack(); // variable declarations

    cout << "Enter a word: ";
    cin >> strInput; // asks user for input and record it in strInput
    
    for (int i = 0; i < strInput.length(); i++) // goes through each letter in the input and pushes it into a stack
    {   
        temp->push(strInput[i]);
    }

    if (strInput != temp->strOutput()) //  if the reversed string is not equal to the inputted string then the input is not a palindrome
                                       // and thus, the results are outputted.
    {
        cout << strInput << " is not a Palindrome." << endl;
    }
    else
    {
        cout << strInput << " is a Palindrome." << endl;
    }
    
    delete temp; // deletes the stack created.
    return 0;

}