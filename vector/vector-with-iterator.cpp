#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int>::iterator it = v.begin();
    // auto it = v.begin();

    cout << *it << endl;

    it++;

    cout << *it << endl;


    it = v.end() - 1;

    cout << *it << endl;


    // print vector with iterator

    it = v.begin();

    while (it != v.end())
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;


    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    
    return 0;
}