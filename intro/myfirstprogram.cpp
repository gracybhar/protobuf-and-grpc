// header file library that lets us work with input
// and output objects, such as cout
#include <iostream>
// means that we can use names for objects and
// variables from the standard library
using namespace std;

int main()
{
    cout << "Hello World! \n"; // cout is an object
    // can omit using namespace std by writing:
    // std::cout << "Hello World!";
    cout << "Hello, C++! \n";
    cout << "My name is Gracy Bhardwaj.\n";

    int age;
    age = 22;
    cout << "My age is ";
    cout << age << ".\n";

    const int minutesPerHour = 60; // constant variable, changing it later will throw an error
    cout << minutesPerHour;

    return 0; // ends the main function but largely obsolete now
}