#include <iostream>
using namespace std;
void appendString(string &, string);
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    appendString(str1, str2);
    cout << str1;

    return 0;
}
void appendString(string &str1, string str2)
{
    str1.append(str2);
}