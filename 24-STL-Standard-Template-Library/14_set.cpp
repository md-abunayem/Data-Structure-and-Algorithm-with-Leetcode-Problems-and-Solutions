#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    // ---------------------------------
    // insert()
    // ---------------------------------

    s.insert(30);
    s.insert(10);
    s.insert(50);
    s.insert(20);
    s.insert(40);
    s.insert(60);

    // Duplicate
    s.insert(20); // Ignored

    cout << "Traversal\n";
    // Output:
    // Traversal

    for (auto val : s)
    {
        cout << val << " ";
        // 10 20 30 40 50 60
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // Iterator Traversal
    // ---------------------------------

    for (set<int>::iterator it = s.begin();
         it != s.end();
         ++it)
    {
        cout << *it << " ";
        // 10 20 30 40 50 60
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // Reverse Iterator
    // ---------------------------------

    for (auto it = s.rbegin();
         it != s.rend();
         ++it)
    {
        cout << *it << " ";
        // 60 50 40 30 20 10
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // size()
    // ---------------------------------

    cout << "Size = "
         << s.size()
         << endl;

    // Output:
    // Size = 6

    // ---------------------------------
    // empty()
    // ---------------------------------

    cout << "Empty = "
         << s.empty()
         << endl;

    // Output:
    // Empty = 0

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // count()
    // ---------------------------------

    cout << "Count of 20 = "
         << s.count(20)
         << endl;

    // Output:
    // Count of 20 = 1

    cout << "Count of 100 = "
         << s.count(100)
         << endl;

    // Output:
    // Count of 100 = 0

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // find()
    // ---------------------------------

    auto it = s.find(40);

    if (it != s.end())
    {
        cout << "Found : "
             << *it
             << endl;

        // Output:
        // Found : 40
    }

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // lower_bound()
    // ---------------------------------

    auto lb = s.lower_bound(35);

    if (lb != s.end())
    {
        cout << "Lower Bound = "
             << *lb
             << endl;

        // Output:
        // Lower Bound = 40
    }

    // ---------------------------------
    // upper_bound()
    // ---------------------------------

    auto ub = s.upper_bound(40);

    if (ub != s.end())
    {
        cout << "Upper Bound = "
             << *ub
             << endl;

        // Output:
        // Upper Bound = 50
    }

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // erase(value)
    // ---------------------------------

    s.erase(20);

    cout << "After erase(20)\n";

    for (auto val : s)
    {
        cout << val << " ";
        // 10 30 40 50 60
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // erase(iterator)
    // ---------------------------------

    auto itr = s.find(40);

    if (itr != s.end())
    {
        s.erase(itr);
    }

    cout << "After erase(iterator)\n";

    for (auto val : s)
    {
        cout << val << " ";
        // 10 30 50 60
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // erase(range)
    // ---------------------------------

    s.erase(s.begin(), s.find(50));

    cout << "After range erase\n";

    for (auto val : s)
    {
        cout << val << " ";
        // 50 60
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // insert()
    // ---------------------------------

    s.insert(70);
    s.insert(80);

    cout << "After insert\n";

    for (auto val : s)
    {
        cout << val << " ";
        // 50 60 70 80
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // clear()
    // ---------------------------------

    s.clear();

    cout << "Size = "
         << s.size()
         << endl;

    // Output:
    // Size = 0

    cout << "Empty = "
         << s.empty()
         << endl;

    // Output:
    // Empty = 1

    return 0;
}