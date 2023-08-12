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
    ComplexNumber operator+(ComplexNumber &obj)
    {
        ComplexNumber result(0, 0);
        result.real = obj.real + this->real; // result.real = obj.real + real;
        result.imaginary = obj.imaginary + this->imaginary; // result.imaginary = obj.imaginary + imaginary;
        return result;
    }
};
int main()
{
    ComplexNumber c1(5, 2), c2(3, 1);
    ComplexNumber c3(0, 0);
    c3 = c1 + c2;
    cout << c3.real << " " << c3.imaginary << endl;
    return 0;
}