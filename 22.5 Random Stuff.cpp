#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 0 and RAND_MAX
    cout << rand() << endl;

    // Generate a random number between 0 and 100
    cout << rand() % 101 << endl;

    return 0;
}
