#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    /*
    // SORTING
    vector<string> names = {"Charlie", "Alice", "Eve", "David", "Bob"};

    // Sort the names alphabetically
    sort(names.begin(), names.end());
    cout << "Sorted names:" << endl;
    for (const string &name : names)
    {
        cout << name << endl;
    }
    cout << endl;

    vector<int> numbers = {1, 7, 3, 5, 9, 2};

    // Sort numbers numerically
    sort(numbers.begin(), numbers.end());
    cout << "Sorted numbers:" << endl;
    for (int number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;

    // Sort numbers in descending order
    sort(numbers.rbegin(), numbers.rend());
    cout << "Sorted numbers in descending order:" << endl;
    for (int number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;

    // Sort numbers numerically, starting from the fourth element [So the last few elements should be sorted]
    sort(numbers.begin() + 3, numbers.end());
    cout << "Sorted numbers starting from the fourth element:" << endl;
    for (int number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;
    */

    // SEARCHING
    vector<int> numbers = {1, 7, 3, 5, 9, 2};

    // Search for the number 3
    auto it = find(numbers.begin(), numbers.end(), 3);

    // Sort the vector in ascending order
    sort(numbers.begin(), numbers.end());

    // Find the first value that is greater than 5 in the sorted vector
    auto it2 = upper_bound(numbers.begin(), numbers.end(), 5);
    // The upper_bound() function is typically used on sorted data structures. That's why we first sort the vector in the example above.

    // Find the smallest number
    auto it3 = min_element(numbers.begin(), numbers.end());

    // Find the largest number
    auto it4 = max_element(numbers.begin(), numbers.end());

    // Modifying Algorithms
    vector<int> copiedNumbers(4);

    // Copy elements from numbers to copiedNumbers
    copy(numbers.begin()+1, numbers.end()-1, copiedNumbers.begin());
    
    cout << "Copied numbers:" << endl;
    for (int number : copiedNumbers)
    {
        cout << number << " ";
    }
    cout << endl;

    // Fill the vector with 0s
    fill(numbers.begin(), numbers.end(), 0);
    cout << "Filled numbers:" << endl;
    for (int number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;


    return 0;
}
