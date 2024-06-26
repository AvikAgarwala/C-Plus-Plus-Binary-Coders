#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> st;

    st.insert(5); // 5
    st.insert(3); // 3 5
    st.insert(4); // 3 4 5
    st.insert(1); // 1 3 4 5
    // emplace() is also available

    // 1 3 4 5

    st.erase(3); // 1 4 5

    for (int i : st)
    {
        cout << i << " ";
    }

    cout << endl;

    // 1 4 5

    auto it = st.find(4);
    st.erase(it); // 1 5

    for (int i : st)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << st.count(5) << endl; // 1
    cout << st.count(7) << endl; // 0

    it = st.find(10);

    if (it == st.end())
    {
        cout << "Not found" << endl;
    }

    return 0;
}
