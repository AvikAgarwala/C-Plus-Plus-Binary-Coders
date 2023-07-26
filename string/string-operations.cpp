#include <iostream>
using namespace std;
int main()
{
    string str1, str2;

    // length
    str1 = "CPP";
    cout << str1.length() << endl;

    // compare
    str1 = "Alik", str2 = "Anik";
    cout << str2.compare(str1) << endl;

    // compare
    str1 = "Anik", str2 = "Alik";
    cout << str2.compare(str1) << endl;

    // compare
    str1 = "Alik", str2 = "Alik";
    cout << str2.compare(str1) << endl;

    // append
    str1 = "Bin", str2 = "ary";
    str1.append(str2);
    cout << str1 << endl;

    // append
    str1 = "Bin";
    str1.append("ary");
    cout << str1 << endl;

    // accessing character by index
    str1 = "Binary";
    cout << str1[1] << endl;

    // updating character by index
    str1 = "Happy";
    str1[0] = 'S';
    cout << str1 << endl;

    return 0;
}