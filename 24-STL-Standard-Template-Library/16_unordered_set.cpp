#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> us;

    // ---------------------------------
    // insert()
    // ---------------------------------

    us.insert(30);
    us.insert(10);
    us.insert(50);
    us.insert(20);
    us.insert(40);
    us.insert(60);

    // Duplicate
    us.insert(20); // Ignored

    cout << "Traversal\n";
    // Output:
    // Traversal
    // Order is NOT guaranteed.
    // Example:
    // 60 40 20 50 10 30

    for (auto val : us)
    {
        cout << val << " ";
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // Iterator Traversal
    // ---------------------------------

    for (unordered_set<int>::iterator it = us.begin();
         it != us.end();
         ++it)
    {
        cout << *it << " ";
        // Same elements
        // Order is implementation dependent
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // size()
    // ---------------------------------

    cout << "Size = "
         << us.size()
         << endl;

    // Output:
    // Size = 6

    // ---------------------------------
    // empty()
    // ---------------------------------

    cout << "Empty = "
         << us.empty()
         << endl;

    // Output:
    // Empty = 0

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // count()
    // ---------------------------------

    cout << "Count of 20 = "
         << us.count(20)
         << endl;

    // Output:
    // Count of 20 = 1

    cout << "Count of 100 = "
         << us.count(100)
         << endl;

    // Output:
    // Count of 100 = 0

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // find()
    // ---------------------------------

    auto it = us.find(40);

    if (it != us.end())
    {
        cout << "Found : "
             << *it
             << endl;

        // Output:
        // Found : 40
    }

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // erase(value)
    // ---------------------------------

    us.erase(20);

    cout << "After erase(20)\n";

    for (auto val : us)
    {
        cout << val << " ";
        // Example:
        // 60 40 50 10 30
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // erase(iterator)
    // ---------------------------------

    auto itr = us.find(40);

    if (itr != us.end())
    {
        us.erase(itr);
    }

    cout << "After erase(iterator)\n";

    for (auto val : us)
    {
        cout << val << " ";
        // Example:
        // 60 50 10 30
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // insert()
    // ---------------------------------

    us.insert(70);
    us.insert(80);

    cout << "After insert\n";

    for (auto val : us)
    {
        cout << val << " ";
        // Example:
        // 80 70 60 50 10 30
    }

    cout << endl;

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // bucket_count()
    // ---------------------------------

    cout << "Bucket Count = "
         << us.bucket_count()
         << endl;

    // Output:
    // Implementation dependent
    // Example:
    // Bucket Count = 13

    // ---------------------------------
    // bucket()
    // ---------------------------------

    cout << "Bucket of 30 = "
         << us.bucket(30)
         << endl;

    // Output:
    // Implementation dependent

    // ---------------------------------
    // load_factor()
    // ---------------------------------

    cout << "Load Factor = "
         << us.load_factor()
         << endl;

    // Output:
    // Example:
    // 0.46

    // ---------------------------------
    // max_load_factor()
    // ---------------------------------

    cout << "Max Load Factor = "
         << us.max_load_factor()
         << endl;

    // Output:
    // 1

    cout << "\n-----------------------------\n";

    // ---------------------------------
    // clear()
    // ---------------------------------

    us.clear();

    cout << "Size = "
         << us.size()
         << endl;

    // Output:
    // Size = 0

    cout << "Empty = "
         << us.empty()
         << endl;

    // Output:
    // Empty = 1

    return 0;
}