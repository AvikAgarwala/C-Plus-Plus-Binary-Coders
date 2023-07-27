#include <iostream>
using namespace std;

class Animal
{
public:
    string name; // class variable
    
    void tellName()
    {
        cout << "My name is " << name << endl;
    }
};

int main()
{
    Animal dog, cat;

    dog.name = "Lucky";
    cat.name = "Tom";

    dog.tellName();
    cat.tellName();

    return 0;
}