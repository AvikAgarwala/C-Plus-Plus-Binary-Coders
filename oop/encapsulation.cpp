#include <iostream>
using namespace std;

class User
{
    // private by default
    string password;

public:
    void setPassword(string password)
    {
        this->password = password;
    }

    void getPassword()
    {
        cout << password << endl;
    }
};

int main()
{
    User u1;

    u1.setPassword("BCD@123");
    u1.getPassword();

    return 0;
}