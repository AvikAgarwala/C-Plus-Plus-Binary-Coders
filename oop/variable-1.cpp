#include <iostream>
using namespace std;

class Animal
{
public:
    void tellName(string name)
    {
        cout << "My name is " << name << endl;
    }
};

int main()
{
    Animal dog, cat;
    
    dog.tellName("Lucky");
    cat.tellName("Tom");

    return 0;
}