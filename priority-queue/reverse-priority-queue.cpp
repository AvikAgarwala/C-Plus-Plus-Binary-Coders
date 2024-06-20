// reverse priority queue

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(3); // 3
    pq.push(5); // 3 5
    pq.push(4); // 3 4 5
    pq.push(1); // 1 3 4 5

    pq.pop(); // 3 4 5

    cout << pq.top() << endl; // 3

    return 0;
}
