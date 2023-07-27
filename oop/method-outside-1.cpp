#include <iostream>
using namespace std;

class Animal
{
public:
    void eat(); // prototype
};

void Animal::eat() // definition
{
    cout << "I can eat." << endl;
}

int main()
{
    Animal dog;
    dog.eat();

    return 0;
}