#include <iostream>
#include <string>
#include <deque>

using namespace std;

void printDeque(string msg, deque<string> cars)
{
    cout << msg;
    for (string car : cars)
    {
        cout << car << " ";
    }
    cout << "\n" << endl;
}


int main()
{

    // The main difference between deque and vector is that deque is double-ended queue, so it is faster in inserting and deleting elements at both ends while vector is faster in random access and it majorly inserts or deletes elements at the end[one end].

    // Create a deque of strings
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print the deque
    printDeque("Original deque: ", cars);
    
    // Access individual elements
    cout << cars[0] << endl;
    cout << cars.at(0) << endl; // Same as above
    cout << cars.front() << endl;
    cout << cars.back() << endl;

    // Change an element
    cars[0] = "Opel";
    cars.at(1) = "Mercedes"; // Same as above, but as mentioned above, .at() is prefered

    // Add an element to the end
    cars.push_front("Tesla");
    cars.push_back("Toyota");

    // Remove elements
    cars.pop_front();
    cars.pop_back();

    // Print the deque
    printDeque("After adding and changing elements: ", cars);

    // Deque size
    cout << "Size of the deque: " << cars.size() << endl;

    // Check if the deque is empty
    cout << (cars.empty() ? "The deque is empty." : "The deque is not empty.") << endl;







    return 0;
}
