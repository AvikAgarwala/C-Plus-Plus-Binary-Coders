#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l1;

    // extra

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);

    // 1 2 3 4 5

    l1.push_front(0); // time complexity: O(1)

    // 0 1 2 3 4 5

    // emplace_front() is also available

    // pop_front() is also available

    return 0;
}
