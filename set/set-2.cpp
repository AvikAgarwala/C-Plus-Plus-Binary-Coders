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
    st.insert(2); // 1 2 3 4 5

    // 1 2 3 4 5

    auto itBegin = st.find(2);
    auto itEnd = st.find(4);

    st.erase(itBegin, itEnd); // 1 4 5

    // print the set

    for (int i : st)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
