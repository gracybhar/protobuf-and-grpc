#include <iostream>
using namespace std;

int x; // this has global scope

void test() // functions should always be declared before main but you can define it after
{
    cout << "I just got executed!\n";
}

void myFunction(string country = "Norway") // this function has a default value so the parameter is technically optional
{
    cout << country << "\n";
}

// pass by reference
void changeValue(int &num) // now you are directly pointing to num and not a copy
// &num means the value in the address of the num variable and * is the pointer
// need to use reference because the scope of num would only exist inside this function otherwise
{
    num = 50;
}

int main()
{
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("USA");
    test();
    // different functions can have the same name as long as their parameters are different types/length (function overloading)

    int value = 10;
    changeValue(value); // Call the function and change the value to 50
    cout << value;

    // lamda is a quick function you can write directly into main and can even be passed into another function
    auto add = [](int a, int b)
    {
        return a + b;
    };

    cout << add(3, 4);

    return 0;
}