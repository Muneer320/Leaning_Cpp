#include <iostream>
#include <string>

using namespace std;

int main()
{

    string name = "John";

    // It/Else   
    if (name == "John") {
        cout << "Name is John" << endl;
    }
    else {
        cout << "Name is not John" << endl;
    }

    int x,y;
    x = 10;
    y = 20;

    // If/Else if/Else
    if (x > y) {
        cout << "x is greater than y" << endl;
    }
    else if (x < y) {
        cout << "x is less than y" << endl;
    }
    else {
        cout << "x is equal to y" << endl;
    }

    // Ternary Operator
    string result = (x > y) ? "x is greater than y" : "x is less than or equal to y";
    cout << result << endl;

    // Switch
    int day = 4;
    switch (day) {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid day" << endl;
    }
    
    
    return 0;
}
