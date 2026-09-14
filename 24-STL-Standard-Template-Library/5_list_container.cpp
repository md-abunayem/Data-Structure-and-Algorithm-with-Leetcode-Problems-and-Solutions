#include <iostream>
#include <list>
using namespace std;

// it does not have the index property for travarsal and access element.

int main()
{
    // List is a sequcence container that strores element in doubly linked list
    list<int> lst;
    list<int> lst1 = {1, 2, 3, 4, 5, 6, 7};
    list<int> lst2(5, 33);

    // push_back();
    // push_front()
    // pop_back()
    // pop_front()

    lst.push_back(10); // 10
    lst.push_back(20); // 10, 20
    lst.push_back(30); // 10, 20, 30

    lst.push_front(40); // 40, 10, 20, 30
    lst.push_front(50); // 50, 40, 10, 20, 30
    lst.push_front(60); // 60, 50, 40, 10, 20, 30

    lst.pop_back(); // 60, 50, 40, 10, 20
    lst.pop_back(); // 60, 50, 40, 10

    lst.pop_front(); // 50, 40, 10
    lst.pop_front(); // 40, 10

    // lst.front(), lst.back()
    cout << lst.front() << endl; // 40
    cout << lst.back() << endl;  // 10

    // emplace_back(val);
    lst.emplace_back(100);  // 40, 10, 100
    lst.emplace_front(200); // 200, 40, 10, 100

    // size(), capacity()
    cout << lst.size() << endl;

    // loop
    for (int val : lst)
    {
        cout << val << " "; // 200, 40, 10, 100
    }

    cout << endl;

    // lst.empty()
    cout << lst.empty() << endl; // 0=> false

    // erase(first irerator, next(second iterator))
    // we need to use "next" as pointer for next element in the list because list is doubly linked list. So, it does not have any index.
    lst.erase(lst.begin(), next(lst.begin(), 2)); // last iterator index excluded

    for (int val : lst)
    {
        cout << val << " "; // 10, 100
    }
    cout << endl;

    // insert(iterator, no. of copy, value)
    lst.insert(lst.begin(), 2, 333); // 333, 333, 10, 100

    // erase(it)
    auto it = next(lst.begin(), 2);
    lst.erase(it); // 333, 333, 100

    for (int val : lst)
    {
        cout << val << " "; // 333, 333, 100
    }
    cout << endl;

    lst.push_back(11); // 333, 333, 100, 11
    lst.push_back(22); // 333, 333, 100, 11, 22
    lst.push_back(33); // 333, 333, 100, 11, 22, 33

    // erase in range
    auto first = next(lst.begin(), 1);  // 333(2nd)
    auto second = next(lst.begin(), 4); // 22

    lst.erase(first, second); // 333, 22, 33

    for (int val : lst)
    {
        cout << val << " "; // 333, 333, 100
    }
    cout << endl;

    // clear()
    lst.clear();
    cout << lst.size();

    return 0;
}