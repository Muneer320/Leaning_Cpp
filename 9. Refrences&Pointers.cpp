#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    // References
    string food = "Pizza";
    string &meal = food; // meal is a reference to food, so any changes to meal will affect food

    cout << food << endl;
    cout << meal << endl;

    meal = "Burger"; // Changing meal will change food as well

    cout << food << endl;
    cout << meal << endl;

    food = "Pizza"; // Changing food will change meal as well

    cout << food << endl;
    cout << meal << endl;
    */

    /*
    // Memory Address
    string food = "Pizza";
    cout << &food << endl; // Outputs the memory address of food (in hexadecimal form) [0x5ffe60]
    */

    // Pointers
    string food = "Pizza";
    string *ptr = &food; // ptr is a pointer to food, so any changes to ptr will affect food

    // Output the value of food (Pizza)
    cout << food << endl;

    // Output the memory address of food (0x5ffe50)
    cout << &food << endl;

    // Output the memory address of food with the pointer (0x5ffe50)
    cout << ptr << endl;

    // Pointer can be declared in the following ways:
    // string* ptr = &food;   // This is the most common and preferred way to declare a pointer
    // string *ptr = &food;
    // string * ptr = &food;

    // Dereferencing a pointer
    cout << *ptr << endl; // Outputs the value of food (Pizza) from the pointer

    // Changing the value of food using a pointer
    *ptr = "Burger";

    // Outputs the value of food (Burger) from the pointer
    cout << *ptr << endl;

    // Output the memory address of food with the pointer (Same as before) [0x5ffe50]
    cout << ptr << endl;

    // Output the memory address of food (0x5ffe50)
    cout << &food << endl;

    // Output the value of food (Burger) from the variable
    cout << food << endl;

    return 0;
}
