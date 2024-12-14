#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printVector(vector<string> cars)
{
    cout << "Cars: ";
    for (string car : cars)
    {
        cout << car << " ";
    }
    cout << "\n" << endl;
}

void isEmpty(vector<string> cars)
{
    cout << (cars.empty() ? "The vector is empty." : "The vector is not empty.") << endl;
    // 0 means false[not empty], 1 means true[empty]
}

int main()
{
    // Create a vector of strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print the vector
    cout << "Original vector: " << endl;
    printVector(cars);

    // Access individual elements
    cout << cars[0] << endl;
    cout << cars.at(0) << endl; // Same as above
    cout << cars.front() << endl;
    cout << cars.back() << endl;

    // For out or range index
    // cout << cars.at(10) << endl; // Throws an exception (You can use try-catch block to handle it)
    // cout << cars[10] << endl;    // Doesn't throw an exception, just skips over it
    // .at() is hence prefered over [] for safety
    // cout << "\n";

    // Change an element
    cars[0] = "Opel";
    cars.at(1) = "Mercedes"; // Same as above, but as mentioned above, .at() is prefered
    // cout << cars[0] << endl;

    // Add an element to the end
    cars.push_back("Tesla");
    cars.push_back("Toyota");

    // Print the vector
    cout << "After adding and changing elements: " << endl;
    printVector(cars);

    // Remove an element from the end
    cars.pop_back();

    cout << "After removing an element from the end: " << endl;
    printVector(cars);

    // Insert an element at the beginning
    cars.insert(cars.begin(), "Audi");

    cout << "After inserting an element at the beginning: " << endl;
    printVector(cars);

    // Remove an element from the beginning
    cars.erase(cars.begin());

    cout << "After removing an element from the beginning: " << endl;
    printVector(cars);

    // Vector size
    cout << "Size of the vector is: " << cars.size() << endl;

    // Check if vector is empty
    isEmpty(cars);

    // Clear the vector
    cout << "Clearing the vector..." << endl;
    cars.clear();

    // Check again if vector is empty
    isEmpty(cars);

    return 0;
}
