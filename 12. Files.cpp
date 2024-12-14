#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main()
{
    // Create a file (This will delete the contents of the previousfile if it already exists and work on the blank file)
    ofstream file("test.txt");
    if (file.is_open()) {
        file << "Hello, World!" << endl;
        file << "This is a test file." << endl;
        file.close();
    }
    else {
        cout << "Error opening file." << endl;
    }

    // Read from a file
    ifstream file2("test.txt");
    if (file2.is_open()) {
        string line;
        while (getline(file2, line)) {
            cout << line << endl;
        }
        file2.close();
    }
    else {
        cout << "Error opening file." << endl;
    }

    // Append to a file
    ofstream file3("test.txt", ios::app);
    if (file3.is_open()) {
        file3 << "This is a new line." << endl;
        file3.close();
    }
    else {
        cout << "Error opening file." << endl;
    }
    
    // Useinf fstream to read and write to the same file
    fstream file4("test.txt", ios::in | ios::out);
    if (file4.is_open()) {
        string line;
        while (getline(file4, line)) {
            cout << line << endl;
        }
        file4 << "This is a new, new line." << endl;  // This will overwrite the file from the beginning
        file4.close();
    }
    else {
        cout << "Error opening file." << endl;
    }

    return 0;
}
