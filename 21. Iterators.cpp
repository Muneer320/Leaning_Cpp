#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{

    // When you are just reading the elements, and don't need to modify them, the for-each loop is much simpler and cleaner than iterators.
    // We use iterators when you need to add, modify, or remove elements during iteration, iterate in reverse, or skip elements.

    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Create a vector iterator called it
    vector<string>::iterator it;

    // Loop through the vector with the iterator
    for (auto it = cars.begin(); it != cars.end();)
    {
        if (*it == "BMW")
        {
            it = cars.erase(it); // Remove the BMW element
        }
        else
        {
            ++it;
        }
    }

    // Print vector elements
    for (const string &car : cars)
    {
        cout << car << "\n";
    }

    // Iterate in reverse order
    // rbegin() returns a reverse iterator pointing to the last element in the vector (not the end of the vector)
    // rend() returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (not the beginning of the vector)
    for (auto it = cars.rbegin(); it != cars.rend(); ++it)
    {
        cout << *it << "\n";
    }

    // For other data structures, you can use the same approach. Example:
    // Create a list called cars that will store strings
    list<string> cars2 = {"Volvo", "BMW", "Ford", "Mazda"};

    // Loop through the list with an iterator
    for (auto it = cars2.begin(); it != cars2.end(); ++it)
    {
        cout << *it << "\n";
    }

    // Same for a set, queue, stack, etc.

    return 0;
}
