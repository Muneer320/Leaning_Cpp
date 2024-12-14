#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    struct   // This way `car` is a structure and could have multiple values
    {
        string name;
        int year;
        string color;
    } car;

    car.name = "Ford";
    car.year = 2020;
    car.color = "Red";

    cout << "Car name: " << car.name << endl;
    cout << "Car year: " << car.year << endl;
    cout << "Car color: " << car.color << endl;
    */
    /*
    struct  // This way `car1` and `car2` both have the same structure and could have different values
    {
        string name;
        int year;
        string color;
    } car1, car2;

    car1.name = "Ford";
    car1.year = 2020;
    car1.color = "Red";

    car2.name = "Toyota";
    car2.year = 2019;
    car2.color = "Blue";

    cout << "Car1 name: " << car1.name << endl;
    cout << "Car1 year: " << car1.year << endl;
    cout << "Car1 color: " << car1.color << endl;

    cout << "\n\n";

    cout << "Car2 name: " << car2.name << endl;
    cout << "Car2 year: " << car2.year << endl;
    cout << "Car2 color: " << car2.color << endl;
    */

    struct Car // This way `Car` is treated as a data type
    {
        string name;
        int year;
        string color;
    };

    Car car1;
    car1.name = "Ford";
    car1.year = 2020;
    car1.color = "Red";

    Car car2;
    car2.name = "Toyota";
    car2.year = 2019;
    car2.color = "Blue";

    cout << "Car1 name: " << car1.name << endl;
    cout << "Car1 year: " << car1.year << endl;
    cout << "Car1 color: " << car1.color << endl;

    cout << "\n\n";

    cout << "Car2 name: " << car2.name << endl;
    cout << "Car2 year: " << car2.year << endl;
    cout << "Car2 color: " << car2.color << endl;

    return 0;
}
