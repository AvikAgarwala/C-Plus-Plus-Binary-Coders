#include <iostream>
using namespace std;

void change(string); // Prototype

int main()
{
    string str = "Happy";
    change(str);  // copy will be sent
    cout << str << endl;

    return 0;
}

void change(string str)
{
    str = "Sad";
}
