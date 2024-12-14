#include <iostream>
#include <string>
#include <set>

using namespace std;

void printStrSet(string msg, set<string> cars)
{
    cout << msg;
    for (string car : cars)
    {
        cout << car << " ";
    }
    cout << "\n"
         << endl;
}

void printIntSet(string msg, set<int> cars)
{
    cout << msg;
    for (int car : cars)
    {
        cout << car << " ";
    }
    cout << "\n"
         << endl;
}

int main()
{

    // Create a set of strings
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda", "BMW"}; // It will automatically sort the elements in alphabetical order and remove duplicates
    set<int> numbers = {1, 6, 7, 3, 1, 6, 1, 9, 2};              // It will automatically sort the elements and remove duplicates

    // Use <Greater> to sort in descending order
    set<string, greater<string>> cars2 = {"Volvo", "BMW", "Ford", "Mazda"};
    set<int, greater<int>> numbers2 = {1, 6, 7, 3, 1, 6, 1, 9, 2};

    // Print the set
    printStrSet("Original cars set (in ascending order): ", cars);
    printIntSet("Original numbers set (in ascending order): ", numbers);

    // Add an element
    cars.insert("Tesla");
    numbers.insert(5);

    // Erase an element
    cars.erase("Ford");
    numbers.erase(6);

    // Print the set
    printStrSet("After adding and erasing elements: ", cars);
    printIntSet("After adding and erasing elements: ", numbers);

    // Set size
    cout << "Size of the cars set: " << cars.size() << endl;

    // Check if the set is empty
    cout << (cars.empty() ? "The cars set is empty." : "The cars set is not empty.") << endl;

    // Count the number of elements with a specific value
    cout << "Number of BMWs: " << cars.count("BMW") << endl; // It will return 1 if the element is present, else 0

    // Erase all elements
    cars.clear();

    // Check if the set is empty
    cout << (cars.empty() ? "The cars set is empty." : "The cars set is not empty.") << endl;

    return 0;
}
