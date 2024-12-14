#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main()
{

    // Create a stack of strings
    stack<string> cars;

    // Add elements to the stack
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // Access the elements
    cout << "Top element: " << cars.top() << endl;


    // Print the stack
    cout << "Original stack: " << endl;
    while (!cars.empty())
    {
        cout << cars.top() << " ";
        cars.pop();
    }

    // Stack size
    cout << "Size of the stack: " << cars.size() << endl;

    // Check if the stack is empty
    cout << (cars.empty() ? "The stack is empty." : "The stack is not empty.") << endl;

    
    cout << "\n" << endl;
    

    // Create a queue of strings
    queue<string> cars2;

    // Add elements to the queue
    cars2.push("Volvo");
    cars2.push("BMW");
    cars2.push("Ford");
    cars2.push("Mazda");
    

    // Access the elements
    cout << "Front element: " << cars2.front() << endl;
    cout << "Back element: " << cars2.back() << endl;


    // Print the queue
    cout << "Original queue: " << endl;
    while (!cars2.empty())
    {
        cout << cars2.front() << " ";
        cars2.pop();
    }

    // Queue size
    cout << "\nSize of the queue: " << cars2.size() << endl;

    // Check if the queue is empty
    cout << (cars2.empty() ? "The queue is empty." : "The queue is not empty.") << endl;


    return 0;
}
