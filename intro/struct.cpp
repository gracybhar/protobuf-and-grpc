#include <iostream>
#include <string>
using namespace std;

enum Level
{
    LOW = 1, // DEFAULT first item of the enum has a value of 0
    MEDIUM = 50,
    HIGH = 75
};

int main()
{
    struct me
    {
        int myNum;
        string myString;
    };

    struct
    {
        string brand;
        string model;
        int year;
    } myCar1, myCar2; // We can add variables by separating them with a comma here

    me myStructure;
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    enum Level myVar = MEDIUM; // enums are declared outside main

    switch (myVar)
    {
    case 1:
        cout << "Low Level";
        break;
    case 2:
        cout << "Medium level";
        break;
    case 3:
        cout << "High level";
        break;
    }

    // references: now food and meal refer to the same value
    // one change to either varible changes both
    // & will also get the memory address
    string food = "Pizza"; // food variable
    string &meal = food;   // reference to food
    string *ptr = &food;   // A pointer variable, with the name ptr, that stores the address of food
    // output the value of the pointer by *ptr (dereferencing)
    *ptr = "Hamburger"; // can change the value of a pointer
    delete ptr;

    return 0;
}
