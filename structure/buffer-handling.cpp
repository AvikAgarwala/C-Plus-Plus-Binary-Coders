#include <iostream>
using namespace std;

struct Student
{
    int roll;
    char sec;
};

int main()
{
    Student s1;
    cin >> s1.roll;

    cin.ignore(); // to clear memory buffer
    cin >> s1.sec;

    cout << s1.roll << " " << s1.sec << endl;

    return 0;
}
