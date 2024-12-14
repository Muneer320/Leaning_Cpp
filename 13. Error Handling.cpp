#include <iostream>
#include <string>

using namespace std;

int main()
{

    try
    {
        cout << "Enter your age: ";
        int age;
        cin >> age;

        if (age >= 18)
        {
            cout << "Access granted." << endl;
        }
        else
        {
            throw(age);
        }
    }
    catch (int myNum) // If you dont know what exception to catch/cathc all exceptions, you can use (...) instead of (int myNum)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "You are " << 18 - myNum << " years too young." << endl;
    }


    return 0;
}
