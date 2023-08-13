#include <iostream>
using namespace std;

class Animal
{
public:
    void eat(); // prototype
};

void Animal::eat() // method of Animal class using scope resolution operator
{
    cout << "I can eat." << endl;
}

void eat() // Separate function
{
    cout << "Separate function." << endl;
}

int main()
{
    Animal dog;
    dog.eat(); // I can eat.

    eat();     // Separate function.
    
    return 0;
}
