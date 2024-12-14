#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Enums are usually defined outside of the main function. For the sake of this example, I will define it here.
    //  It is usually used to define a set of named constants

    /*
    enum Level
    {
        LOW,     // 0
        MEDIUM,  // 1
        HIGH     // 2
    };

    // enum Level myVar;
    enum Level myVar = MEDIUM;
    // It can also be defined without enum at start, but we do it for convention, and better readability like:
    // Level myVar;

    cout << myVar;
    // Output: 1
    // This is because LOW is 0, MEDIUM is 1, and HIGH is 2. So, MEDIUM is 1. The value of an enum is set to the index of the value in the list of values (Unless changed).
    */
    /*
    enum Level
    {
        LOW = 25,     // 25
        MEDIUM = 50,  // 50
        HIGH = 75     // 75
    };

    enum Level myVar = MEDIUM;

    cout << myVar;
    // Output: 50 (Because we have set the values of LOW, MEDIUM, and HIGH to 25, 50, and 75 respectively)
    */
    /*
    enum Level
    {
        LOW = 5,
        MEDIUM, // Now 6
        HIGH    // Now 7
    };

    enum Level myVar = MEDIUM;

    cout << myVar;
    // Output: 6 (Because we have set the value of LOW to 5, and MEDIUM is the next value in the list, so it is 6)
    */
   
    enum Level
    {
        LOW = 3,
        MEDIUM,
        HIGH
    };

    enum Level myVar = MEDIUM;

    switch (myVar)
    {
    case 3:
        cout << "Low Level";
        break;
    case 4:
        cout << "Medium level";
        break;
    case 5:
        cout << "High level";
        break;
    }
    

    return 0;
}
