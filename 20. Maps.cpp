#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{

    // Create a map of string and int
    map<string, int> people = {
        {"John", 32},
        {"Doe", 30},
        {"Jane", 28},
        {"Smith", 35}};
    // Again like sets it automatically sorts the keys in ascending order, use <Greater> to sort in descending order or use <unordered_map> to not sort at all

    // Print the map
    cout << "Original map: " << endl;
    for (pair<string, int> person : people)
    {
        cout << person.first << " is " << person.second << " years old." << endl;
    }
    cout << endl;

    // Access individual elements
    cout << "John is " << people["John"] << " years old." << endl;
    cout << "Doe is " << people.at("Doe") << " years old." << endl;
    // cout << "Alice is " << people.at("Alice") << " years old." << endl; // Throws an exception becuase Alice is not in the map

    // Change an element
    people["John"] = 33;
    people.at("Doe") = 31;

    // Add an element
    people["Alice"] = 25;
    people.insert({"Bob", 27});

    // Adding an existing element
    people.insert({"John", 34}); // Doesn't change the value of John because it already exists

    // Print the map
    cout << "After adding and changing elements: " << endl;
    for (pair<string, int> person : people)
    {
        cout << person.first << " is " << person.second << " years old." << endl;
    }
    cout << endl;

    // Remove an element
    people.erase("Alice");

    // Print the map
    cout << "After removing an element: " << endl;
    for (pair<string, int> person : people)
    {
        cout << person.first << " is " << person.second << " years old." << endl;
    }
    cout << endl;

    // Map size
    cout << "The map has " << people.size() << " elements." << endl;

    // Check if the map is empty
    cout << (people.empty() ? "The map is empty." : "The map is not empty.") << endl;

    // Check if specific key exists
    cout << (people.count("Alice") ? "Alice is in the map." : "Alice is not in the map.") << endl;

    // Remove all elements
    people.clear();

    return 0;
}
