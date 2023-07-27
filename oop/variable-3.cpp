#include <iostream>
using namespace std;

class Animal
{
public:
    string name; // class variable

    void setName(string str) // local variable
    {
        name = str;
    }
    
    void tellName()
    {
        cout << "My name is " << name << endl;
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