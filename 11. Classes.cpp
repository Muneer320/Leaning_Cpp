#include <iostream>
#include <string>

using namespace std;

// Class definition and syntax
class MyCar
{
public:
    string brand;
    string model;
    int year;
};


// Class with methods/functions
class MyClass
{
public:
    void myMethod() // Method/function declaration
    {
        cout << "Hello World!" << endl;
    }

    void myMethod2();       // Method/function declaration without definition
    int myMethod3(int num); // Method/function declaration without definition with return value
};


// Method/function definition from class
void MyClass::myMethod2()
{
    cout << "Hi, World!" << endl;
}

int MyClass::myMethod3(int num)
{
    return num * 2;
}


// Class with Constructor
class Car
{
public:
    string brand;
    string model;
    int year;

    Car(string x, string y, int z)
    { // Constructor (special method that is called when an object is created)
        brand = x;
        model = y;
        year = z;
    }
};


// Class wirth public and private members
class Employee
{
    // Note: The members of a class are private, ie, if you don't specify public/private, the members are private by default

public:
    string name;
    string company;
    int age;

    void introduce()
    {
        cout << "Hello, my name is " << name << " and I work at " << company << "!" << endl;
    }

private:
    int salary = 50000;
};


// Get and Set methods to access private members in a class
class Person
{
private:
    string name;

public:
    void setName(string x)
    {
        name = x;
    }

    string getName()
    {
        return name;
    }
};


// Inheritance
class Animal
{
public:
    string kingdom = "Animalia";

    void animalSound()
    {
        cout << "The animal makes a sound" << endl;
    }
};

class Pig : public Animal
{
public:
    string species = "Sus scrofa domesticus";
};


// Multilevel Inheritance
class Mammal : public Animal // Derived from Animal
{
public:
    string animal_class = "Mammalia";

    void animalSound()
    {
        cout << "The animal makes a sound" << endl;
    }
};

class Dog : public Mammal // Derived from Mammal
{
public:
    string breed = "Labrador";
};

class Puppy : public Dog // Derived from Dog
{
public:
    string color = "Golden";
};


// Multiple Inheritance
class Parent1
{
public:
    void parent1Func()
    {
        cout << "Parent 1 function" << endl;
    }
};

class Parent2
{
public:
    void parent2Func()
    {
        cout << "Parent 2 function" << endl;
    }
};

class Child : public Parent1, public Parent2
{
public:
    void childFunc()
    {
        cout << "Child function" << endl;
    }
};


// Protected members manipulation
class Employee2
{
protected:
    int salary;
};

class Programmer : public Employee2
{
public:
    int bonus;
    void setSalary(int s)
    {
        salary = s;
    }
    void addBonus(int b)
    {
        salary += bonus;
    }
    int getSalary()
    {
        return salary;
    }
};


// Polymorphism (It allows us to perform a single action in different ways.)
class Animal2
{
public:
    void animalSound()
    {
        cout << "The animal makes a sound" << endl;
    }
};

class Dog2 : public Animal2
{
public:
    void animalSound()
    {
        cout << "The dog barks" << endl;
    }
};

class Cat : public Animal2
{
public:
    void animalSound()
    {
        cout << "The cat meows" << endl;
    }
};



int main()
{
    /*
    MyCar car1;
    car1.brand = "Ford";
    car1.model = "Mustang";
    car1.year = 1969;

    MyCar car2;
    car2.brand = "Chevrolet";
    car2.model = "Camaro";
    car2.year = 1967;

    cout << car1.brand << " " << car1.model << " " << car1.year << endl;
    cout << car2.brand << " " << car2.model << " " << car2.year << endl;
    */

    /*
    MyClass myObj;
    myObj.myMethod();
    myObj.myMethod2();
    cout << myObj.myMethod3(50) << endl;
    */

    /*
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
    */

    /*
    Employee emp1;
    emp1.name = "John";       // This will work because name is public
    emp1.company = "Apple";   // This will work because company is public
    emp1.age = 35;            // This will work because age is public

    emp1.introduce();

    emp1.salary = 100000;    // This will throw an error because salary is private
    */

    /*
    Person myObj;
    myObj.setName("John");
    cout << myObj.getName() << endl;
    */

    /*
    Pig myPig;
    myPig.animalSound();
    cout << "Kingdom: " << myPig.kingdom << endl;
    cout << "Species: " << myPig.species << endl;
    */

    /*
    Puppy myPuppy;
    myPuppy.animalSound();
    cout << "Kingdom: " << myPuppy.kingdom << endl;
    cout << "Class: " << myPuppy.animal_class << endl;
    cout << "Breed: " << myPuppy.breed << endl;
    cout << "Color: " << myPuppy.color << endl;
    */

    /*
    Child myChild;
    myChild.parent1Func();
    myChild.parent2Func();  
    myChild.childFunc();
    */

    /*
    Programmer myProgrammer;
    myProgrammer.setSalary(50000);
    myProgrammer.bonus = 15000;
    myProgrammer.addBonus(15000);
    cout << "Salary: " << myProgrammer.getSalary() << endl;
    */

    Animal2 myAnimal;
    Dog2 myDog;
    Cat myCat;

    myAnimal.animalSound();
    myDog.animalSound();
    myCat.animalSound();


    return 0;
}
