#include <iostream>
#include <string>
#include <list>

using namespace std;

void printList(string msg, list<string> cars)
{
    cout << msg;
    for (string car : cars)
    {
        cout << car << " ";
    }
    cout << "\n" << endl;
}

void isEmpty(list<string> cars)
{
    cout << (cars.empty() ? "The list is empty." : "The list is not empty.") << endl;
    // 0 means false[not empty], 1 means true[empty]
}


int main()
{
    // Main difference between list and vector is that list is doubly linked list, so it is slower than vector
    // But it is faster in inserting and deleting elements
    // Vector is used for random access and it majorly inserts or deletes elements at the end,
    // while list is used for inserting or deleting elements at the beginning or in the end or even in the middle.

    // Create a list of strings
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print the list
    printList("Original list: ", cars);

    // Access individual elements
    cout << cars.front() << endl;
    cout << cars.back() << endl;

    // Change an element
    cars.front() = "Opel";
    cars.back() = "Mercedes";

    printList("After changing elements: ", cars);

    // Add an element
    cars.push_back("Tesla");
    cars.push_front("Toyota");

    printList("After adding elements: ", cars);

    // Remove an element
    cars.pop_back();
    cars.pop_front();

    printList("After removing elements: ", cars);

    // List size
    cout << "Size of the list: " << cars.size() << endl;

    // Check if the list is empty
    isEmpty(cars);

    // Remove all elements
    cars.clear();

    printList("After clearing the list: ", cars);

    // Check if the list is empty
    isEmpty(cars);


    return 0;
}
