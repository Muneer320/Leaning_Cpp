#include <iostream>
#include <string>

using namespace std;

// To define a function, you start with what it returns, then the name of the function, then the parameters in parentheses, and finally the body of the function in curly braces
// If the function does not return anything, you use the keyword void,
// If it returns something, you use the type of the return value

// Function declaration with definition
void printHelloWorld()
{
    cout << "Hello, World!" << endl;
}

// Function declaration without definition
void myFunc();

// Function with default parameters
void mySecondFunc(string name, int age, char sex = 'M') // Parameters with default values must be at the end of the parameter list
{
    cout << "Hello, " << name << "! You are " << age << " years old and your sex is " << sex << endl;
}

// Function with int return value
int add(int a, int b)
{
    return a + b;
}

// Function with float return value
float divide(float a, float b)
{
    return a / b;
}

// Function with string return value
string concatenate(string a, string b)
{
    return a + b;
}

// Function with int reference parameters
void swapNums(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

// Function with string reference parameters
void modifyStr(string &str)
{
    str += " World!";
}

// Function with array parameter
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

float toCelsius(float fahrenheit)
{
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

// Overloading functions
// You can have multiple functions with the same name but different parameters
// The compiler will choose the correct function based on the parameters you pass

// Example 1
// Function with int parameter
int overload1(int a, int b)
{
    return a + b;
}

// Function with double parameters
double overload1(double a, double b)
{
    return a - b;
}

// Example 2
// Function with one int parameter
int overload2(int a)
{
    return a * 2;
}

// Function with two int parameters
int overload2(int a, int b)
{
    return a / b;
}

int main()
{

    /*
    printHelloWorld();
    myFunc();
    mySecondFunc("Olivia", 25, 'F');
    mySecondFunc("John", 25);
    */

    /*
    cout << add(42000, 69) << endl;
    cout << divide(420, 69) << endl;
    cout << concatenate("Hello", "World") << endl;
    */

    /*
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << endl;
    cout << firstNum << ", " << secondNum << endl;

    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);

    cout << "After swap: " << endl;
    cout << firstNum << ", " << secondNum << endl;
    */

    /*
    string str = "Hello";
    cout << "Before modify: " << str << endl;

    modifyStr(str);

    cout << "After modify: " << str << endl;
    */

    /*
    int nums[] = {1, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    printArray(nums, size);
    */

    /*
    cout << toCelsius(98.6) << endl;
    */

    cout << overload1(10, 20) << endl;
    cout << overload1(10.5, 20.5) << endl;

    cout << overload2(10) << endl;
    cout << overload2(10, 20) << endl;

    return 0;
}

void myFunc()
{
    cout << "This function was defined adter the main() but declared before the main()" << endl;
}