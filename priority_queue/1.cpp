#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(3); // 3
    pq.push(5); // 5 3
    pq.push(4); // 5 4 3
    pq.push(1); // 5 4 3 1

    pq.pop(); // 4 3 1

    cout << pq.top() << endl; // 4

    return 0;
}
