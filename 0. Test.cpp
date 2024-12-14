#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    /*
    char check = 97;
    char check2 = 'a';
    if (check == check2) {
        cout << "Characters are equal" << endl;
    }
    else {
        cout << "Characters are not equal" << endl;
    }
    cout << (check==check2) << endl;
    */

    /*
    string msg = "Hello, World!";
    cout << msg << endl;
    cout << msg[0] << endl;
    cout << msg[-1] << endl; // Doesn't work
    cout << msg[msg.length() - 1] << endl;
    */

    
    const int rows = 4;
    const int cols = 4;
    bool ships[rows][cols] = {0};

    // Create a vector of positions
    vector<int> positions(rows * cols);
    for (int i = 0; i < rows * cols; ++i) {
        positions[i] = i;
    }

    // Shuffle the positions
    random_shuffle(positions.begin(), positions.end());

    // Place exactly 4 ones in random positions
    for (int i = 0; i < 4; ++i) {
        int pos = positions[i];
        ships[pos / cols][pos % cols] = 1;
    }

    // Print the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << ships[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
