#include <iostream>
using namespace std;

class Calculation
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    float sum(float a, float b)
    {
        return a + b;
    }
    double sum(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculation c1
    
    cout << c1.sum(5, 6) << endl;
    cout << c1.sum(1.1, 2.2) << endl;
    cout << c1.sum(1.2f, 0.1f) << endl;
    
    return 0;
}
