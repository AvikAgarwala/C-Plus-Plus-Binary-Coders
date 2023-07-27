#include <iostream>
using namespace std;

class Animal // class definition
{
public:
    // attribute
    string name;
    int age;

    // method
    void eat()
    {
        cout << "I can eat." << endl;
    }
};

int main()
{
    Animal dog, cat; // create object

    dog.name = "Lucky"; // accessing attribute of the object 'dog'
    dog.age = 6;

    cat.name = "Tom";
    cat.age = 5;

    cout << dog.name << " " << dog.age << endl;
    dog.eat(); // method called for dog object

    cout << cat.name << " " << cat.age << endl;
    dog.eat();

    return 0;
}