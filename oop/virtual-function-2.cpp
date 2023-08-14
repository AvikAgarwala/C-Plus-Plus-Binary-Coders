#include <iostream>
using namespace std;
class parent1
{
public:
    virtual void display()
    {
        cout << "parent display" << endl;
    }
};
class parent2
{
public:
    virtual void identity()
    {
        cout << "I am a child" << endl;
    }
};
class child : public parent1, public parent2
{
public:
    void display()
    {
        cout << "child dispaly" << endl;
    }
    void identity()
    {
        cout << "I am grand child " << endl;
    }
};

int main()
{
    child c1;
    parent1 *ptr = &c1;

    ptr->display();

    return 0;
}