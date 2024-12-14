#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{"Hello", "C++", "World", "now", "you have been", "joined by", "the great", "MUNEER ALAM!"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }

    cout << endl;
}
