#include <iostream>
using namespace std;

void change(string *); // Prototype

int main()
{
    string str = "Happy";
    change(&str);
    cout << str << endl;

    return 0;
}

void change(string *str) // Passing of the actual string
{
    *str = "Sad";
}
