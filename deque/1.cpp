#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(1); // 1
    // emplace_back() is also available
    dq.push_back(2); // 1 2
    dq.push_front(3); // 3 1 2
    // emaplce_front() is also available

    dq.pop_back(); // 3 1
    dq.pop_front(); // 1
    dq.push_back(5); // 1 5

    cout << dq.front() << " " << dq.back() << endl; // 1 5

    return 0;
}
