#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string msg = "Hello C++ World now you have been joined by the great MUNEER ALAM!";

    // For Loop
    for (int i = 0; i < 5; i++)
    {
        cout << msg << endl;
    }

    // While Loop
    int i = 0;
    while (i < msg.length())
    {
        cout << msg[i] << " ";
        i++;
    }
    cout << endl;

    // Do While Loop (It is different from while loop because it executes the code block at lest once before checking the condition)
    i = 0;
    do
    {
        cout << msg[i] << " ";
        i++;
    } while (i < msg.length());
    cout << endl;

    // Range-based For Loop
    int number = 2;

    for (int i = 1; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            continue; // Skip the rest of the code block and continue with the next iteration
        }
        if (i == 21)
        {
            break; // Exit the loop
        }

        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
