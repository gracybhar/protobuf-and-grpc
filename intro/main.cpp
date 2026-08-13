#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Type a number: ";       // Type a number and press enter
    cin >> x;                        // Get user input from the keyboard
    cout << "Your number is: " << x; // Display the input value

    int myNum = 5;             // 2/4 byte
    float myFloatNum = 5.99;   // Floating point number (less precise than double)
    double myDoubleNum = 9.98; // Floating point number
    char myLetter = 'D';       // 1 (also can use ascii values and initiate as int)
    bool myBoolean = true;     // 1
    string myText = "Hello";   // String
    auto y = 1;                // automatically  assigns a type but type can not be changed later

    cout << myText; // can only concat: string + string or string + char

    // use getline() for string instead of cin or omit namespace
    string fullName;
    getline(cin, fullName);
    cout << fullName;

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    vector<string> cars = {"Volvo", "BMW", "Ford"}; // vectors are resizeable arrays
    // sizeof(arrayName) = returns the size of the array in bytes
    cout << cars[0];
    return 0;
}