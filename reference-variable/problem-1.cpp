#include <iostream>
using namespace std;
void changeString(string &);
int main()
{
    string str;
    cin >> str;
    changeString(str);
    cout << str;

    return 0;
}
void changeString(string &ref)
{
    ref = "Binary Coders";
}