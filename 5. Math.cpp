#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    // These does not require <cmath> header
    cout << "Max of 10 and 20: " << max(10, 20) << endl;
    cout << "Min of 10 and 20: " << min(10, 20) << endl;

    // These require <cmath> header
    cout << "Square root of 64: " << sqrt(64) << endl;
    cout << "Power of 2^3: " << pow(2, 3) << endl;
    cout << "Absolute value of -4.7: " << abs(-4.7) << endl;
    cout << "Round of 9.99: " << round(9.99) << endl;
    cout << "Ceil of 9.99: " << ceil(9.99) << endl;
    cout << "Floor of 9.99: " << floor(9.99) << endl;
    cout << "Log of 2: " << log(2) << endl; 
    cout << "Log10 of 5: " << log10(5) << endl;
    cout << "Exponential of 2: " << exp(2) << endl;
    cout << "Sine of 30 degrees: " << sin(30) << endl;
    cout << "Cosine of 30 degrees: " << cos(30) << endl;
    cout << "Tangent of 30 degrees: " << tan(30) << endl;
    cout << "Arc sine of 0.5: " << asin(0.5) << endl;
    cout << "Arc cosine of 0.5: " << acos(0.5) << endl;
    cout << "Arc tangent of 0.5: " << atan(0.5) << endl;
    cout << "Hyperbolic sine of 0.5: " << sinh(0.5) << endl;
    cout << "Hyperbolic cosine of 0.5: " << cosh(0.5) << endl;
    cout << "Hyperbolic tangent of 0.5: " << tanh(0.5) << endl;
    cout << "Inverse hyperbolic sine of 0.5: " << asinh(0.5) << endl;
    cout << "Inverse hyperbolic cosine of 0.5: " << acosh(0.5) << endl;
    cout << "Inverse hyperbolic tangent of 0.5: " << atanh(0.5) << endl;
    cout << "Fmod of 10.25 and 3.5: " << fmod(10.25, 3.5) << endl;
    cout << "Remainder of 10.25 and 3.5: " << remainder(10.25, 3.5) << endl;
    cout << "Fabs of -4.7: " << fabs(-4.7) << endl;
    cout << "Cbrt of 27: " << cbrt(27) << endl;
    cout << "Hypot of 3 and 4: " << hypot(3, 4) << endl;


    return 0;
}
