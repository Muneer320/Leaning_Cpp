#include <iostream>
#include <unordered_map>
using namespace std;


unordered_map<int, int> fib_cache;

int fibonacci(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    if (fib_cache.find(n) != fib_cache.end())
    {
        return fib_cache[n];
    }

    int result = fibonacci(n - 1) + fibonacci(n - 2);
    fib_cache[n] = result;

    return result;
}


unordered_map<int, int> fact_cache;

int factorial(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0 || n == 1)
    {
        return 1;
    }

    if (fact_cache.find(n) != fact_cache.end())
    {
        return fact_cache[n];
    }

    int result = n * factorial(n - 1);
    fact_cache[n] = result;

    return result;
}

int main()
{
    int n = 10;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    cout << "Factorial(" << n << ") = " << factorial(n) << endl;
    cout << "\n\n";
    for (const auto &pair : fib_cache)
    {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }
    for (const auto &pair : fact_cache)
    {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    return 0;
}
