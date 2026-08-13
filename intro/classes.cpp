#include <iostream>
#include <string>
using namespace std;

class MyClass
{                                   // The class
public:                             // Access specifier
    int myNum;                      // Attribute (int variable)
    string myString;                // Attribute (string variable)
    void myMethod(string myString); // Method/function declaration
    MyClass()
    { // Constructor
        cout << "This is inside the constructor\n";
        // I can choose to have the variable be assigned here after they are declared in the class
        // constructor can also be defined outside of the class like myMethod
        // just like methods, constructor overloading also exists
    }
    void setSalary(int s)
    {
        salary = s;
    }
    // Getter
    int getSalary()
    {
        return salary;
    }

    // encapsulation (hiding sensitive data from the user)
    // private attributes can only be accessed by set and get methods
private:        // Private access specifier (limited only to the CLASS)
    int salary; // Private attribute
};

// inherited class that inherits the attributes and methods
// a child class can have multiple parent classes (it will just have the union)
// polymorphism is when child classes override / reuse some functionality of the class they inherit from
// if you want to give override functionality put "virtual" infront of the method header
class Word : public MyClass
{
public:
    string word = "Gracy\n";
};

// Method/function definition outside the class
void MyClass::myMethod(string myString)
{
    cout << "Hello World!\n";
    cout << myString;
}

int main()
{
    MyClass myObj; // Create an object of MyClass

    // Access attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Some text \n";
    myObj.myMethod(myObj.myString);
    // myObj.salary = 50000; // Not allowed (private) - causes error
    myObj.setSalary(50000);
    cout << myObj.getSalary() << "\n";

    Word name;
    name.setSalary(100000);
    cout << name.word << name.getSalary() << "\n";

    // Print values
    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    return 0;
}
