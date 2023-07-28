class A // base class
{
public:
    int a;
};

class B // base class
{
public:
    int b;
};

class C : public A, public B // derived class
{
public:
    int c;
};

int main()
{
    // YOUR CODE GOES HERE

    return 0;
}