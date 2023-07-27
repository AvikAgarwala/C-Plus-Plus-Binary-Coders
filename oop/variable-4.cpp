#include <iostream>
using namespace std;

class Animal
{
public:
    string name; // class variable

    void setName(string name) // local variable
    {
        this->name = name;
    }

    void tellName()
    {
        cout << "My name is " << name << endl;
        // cout << "My name is " << this->name << endl;
    }
};

int main()
{
    Animal dog, cat;

    dog.setName("Lucky");
    cat.setName("Tom");

    dog.tellName();
    cat.tellName();

    return 0;
}