#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;

    // ---------------------------------
    // insert()
    // ---------------------------------

    ms.insert(30);
    ms.insert(10);
    ms.insert(50);
    ms.insert(20);
    ms.insert(40);
    ms.insert(60);

    // Duplicate values
    ms.insert(20);
    ms.insert(30);
    ms.insert(20);

    cout << "Traversal\n";
    // Output:
    // Traversal

    for (auto val : ms)
    {
        cout << val << " ";
        // 10 20 20 20 30 30 40 50 60
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // Iterator Traversal
    // ---------------------------------

    for (multiset<int>::iterator it = ms.begin();
         it != ms.end();
         ++it)
    {
        cout << *it << " ";
        // 10 20 20 20 30 30 40 50 60
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // Reverse Iterator
    // ---------------------------------

    for (auto it = ms.rbegin();
         it != ms.rend();
         ++it)
    {
        cout << *it << " ";
        // 60 50 40 30 30 20 20 20 10
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // size()
    // ---------------------------------

    cout << "Size = "
         << ms.size()
         << endl;

    // Output:
    // Size = 9

    // ---------------------------------
    // empty()
    // ---------------------------------

    cout << "Empty = "
         << ms.empty()
         << endl;

    // Output:
    // Empty = 0

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // count()
    // ---------------------------------

    cout << "Count of 20 = "
         << ms.count(20)
         << endl;

    // Output:
    // Count of 20 = 3

    cout << "Count of 100 = "
         << ms.count(100)
         << endl;

    // Output:
    // Count of 100 = 0

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // find()
    // ---------------------------------

    auto it = ms.find(30);

    if (it != ms.end())
    {
        cout << "Found : "
             << *it
             << endl;

        // Output:
        // Found : 30
    }

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // lower_bound()
    // ---------------------------------

    auto lb = ms.lower_bound(25);

    if (lb != ms.end())
    {
        cout << "Lower Bound = "
             << *lb
             << endl;

        // Output:
        // Lower Bound = 30
    }

    // ---------------------------------
    // upper_bound()
    // ---------------------------------

    auto ub = ms.upper_bound(30);

    if (ub != ms.end())
    {
        cout << "Upper Bound = "
             << *ub
             << endl;

        // Output:
        // Upper Bound = 40
    }

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // equal_range()
    // ---------------------------------

    auto range = ms.equal_range(20);

    cout << "All occurrences of 20\n";
    // Output:
    // All occurrences of 20

    for (auto itr = range.first;
         itr != range.second;
         ++itr)
    {
        cout << *itr << " ";
        // 20 20 20
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // erase(value)
    // Removes ALL occurrences
    // ---------------------------------

    ms.erase(20);

    cout << "After erase(20)\n";

    for (auto val : ms)
    {
        cout << val << " ";
        // 10 30 30 40 50 60
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // erase(iterator)
    // Removes ONE occurrence
    // ---------------------------------

    auto itr = ms.find(30);

    if (itr != ms.end())
    {
        ms.erase(itr);
    }

    cout << "After erase(iterator)\n";

    for (auto val : ms)
    {
        cout << val << " ";
        // 10 30 40 50 60
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // erase(range)
    // ---------------------------------

    ms.erase(ms.begin(), ms.find(40));

    cout << "After range erase\n";

    for (auto val : ms)
    {
        cout << val << " ";
        // 40 50 60
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // insert()
    // ---------------------------------

    ms.insert(70);
    ms.insert(80);
    ms.insert(70);

    cout << "After insert\n";

    for (auto val : ms)
    {
        cout << val << " ";
        // 40 50 60 70 70 80
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // clear()
    // ---------------------------------

    ms.clear();

    cout << "Size = "
         << ms.size()
         << endl;

    // Output:
    // Size = 0

    cout << "Empty = "
         << ms.empty()
         << endl;

    // Output:
    // Empty = 1

    return 0;
}