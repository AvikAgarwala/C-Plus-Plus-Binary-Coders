#include <iostream>
using namespace std;
class ComplexNumber
{
public:
    int real;
    int imaginary;
    ComplexNumber(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    ComplexNumber operator++(int)
    {
        ComplexNumber tempObject(real, imaginary); // holding the current values
        real += 2;
        return tempObject; // returning the temporary state
    }
};
int main()
{
    ComplexNumber c1(5, 9);
    cout << (c1++).real << " " << c1.real << endl;
    return 0;
}