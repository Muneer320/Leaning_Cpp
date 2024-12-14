#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    char grade = 'A';              // Single character or ASCII value
    char grade2 = 123;             // Single character or ASCII value
    string name = "Muneer Alam";   // String of characters
    int score = 93;                // Integer
    float percentile = 98.14;      // Floating point number
    double p_percentile = 2.71828; // Double precision floating point number
    bool b = true;                 // Boolean

    cout << name << " got grade ";
    cout << grade << " with a score of " << score << endl;
    cout << "His percentile for the session is " << percentile;
    cout << " more precisely " << p_percentile << endl;
    if (b)
    {
        cout << "He is a good student!" << endl;
    }
    else
    {
        cout << "He is a bad student!" << endl;
    }

    // Array
    int marks[5] = {90, 85, 95, 88, 92};
    string names[5] = {"Muneer", "Ali", "Ahmed", "Khan", "Alam"};
    for (int i = 0; i < size(names); i++) // Normal for loop
    {
        cout << names[i] << " got " << marks[i] << " marks" << endl;
    }

    cout << "\n\n";

    for (int mark : marks) // Direct Access for loop
    {
        cout << mark << " ";
    }
    cout << endl;

    // marks[5] = 100; // This will give an error because the array is of size 5 and we are trying to access the 6th element

    // Vector (Difference between array and vector is that vector can be resized)
    vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6);
    for (int i: v)
    {
        cout << i << " ";
    }

    cout << endl;

    // Size of the vector
    cout << "Size of the vector (using .size()): " << v.size() << endl;
    cout << "Size of the vector (using sizeof([vector])): " << sizeof(v) << endl; // This will give the size of the vector in bytes, ie, 24 bytes (4*6), 4 bytes for each integer and 6 integers
    // To get the size of the vector in bytes, we can use the following formula:
    cout << "Size of the vector (using sizeof([vector]) / sizeof([vector][0])): " << sizeof(v) / sizeof(v[0]) << endl;

    return 0;
}
