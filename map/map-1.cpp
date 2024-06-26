#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> mp;

    mp[1]  = 2; // 1 -> 2    

    mp.insert(make_pair(3, 4)); // 1 -> 2, 3 -> 4

    // emplace() is also available

    // alternate syntax
    // mp.insert({2, 3}); // 1 -> 2, 2 -> 3, 3 -> 4

    // 1 -> 2, 2 -> 3, 3 -> 4

    mp.insert(make_pair(2, 3)); // 1 -> 2, 2 -> 3, 3 -> 4

    for (auto i : mp)
    {
        cout << i.first << " -> " << i.second << endl;
    }

    cout << endl;
    cout << endl;

    cout << mp[2] << endl; // 3
    cout << mp[4] << endl; // depends on the compiler, but in general, it will be 0

    // find

    auto it = mp.find(2);

    cout << (*it).second << endl; // 3
    cout << it->second << endl; // 3 (alternate syntax)

    return 0;
}
