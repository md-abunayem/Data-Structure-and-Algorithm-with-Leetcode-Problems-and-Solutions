#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> mp;

    // --------------------------
    // Insert Elements
    // --------------------------

    mp.emplace(101, "Nayem");
    mp.emplace(103, "John");
    mp.emplace(102, "Michel");
    mp.emplace(105, "Kibria");
    mp.emplace(104, "Ahon");

    // Duplicate keys
    mp.emplace(101, "Alan");
    mp.emplace(101, "Alex");
    mp.emplace(102, "Robin");

    mp.insert({108, "Abro"});
    mp.insert({106, "David"});

    cout << "Forward Traversal\n";
    // Output:
    // Forward Traversal

    for (auto val : mp)
    {
        cout << val.first << " " << val.second << endl;
        // 101 Nayem
        // 101 Alan
        // 101 Alex
        // 102 Michel
        // 102 Robin
        // 103 John
        // 104 Ahon
        // 105 Kibria
        // 106 David
        // 108 Abro
    }

    cout << "\n-----------------------------------\n";
    // -----------------------------------

    // Iterator Traversal
    for (multimap<int, string>::iterator it = mp.begin();
         it != mp.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
        // Same output as above
    }

    cout << "\n-----------------------------------\n";
    // -----------------------------------

    // Reverse Iterator
    for (auto it = mp.rbegin(); it != mp.rend(); ++it)
    {
        cout << it->first << " " << it->second << endl;
        // 108 Abro
        // 106 David
        // 105 Kibria
        // 104 Ahon
        // 103 John
        // 102 Robin
        // 102 Michel
        // 101 Alex
        // 101 Alan
        // 101 Nayem
    }

    cout << "\n-----------------------------------\n";
    // -----------------------------------

    // count()
    cout << "Count of key 101 = "
         << mp.count(101) << endl;
    // Output:
    // Count of key 101 = 3

    cout << "\n-----------------------------------\n";
    // -----------------------------------

    // size()
    cout << "Size = " << mp.size() << endl;
    // Output:
    // Size = 10

    // empty()
    cout << "Empty = " << mp.empty() << endl;
    // Output:
    // Empty = 0

    cout << "\n-----------------------------------\n";
    // -----------------------------------

    // find()
    auto it = mp.find(101);

    if (it != mp.end())
    {
        cout << "First occurrence of 101\n";
        // Output:
        // First occurrence of 101

        cout << it->first << " "
             << it->second << endl;
        // Output:
        // 101 Nayem
    }

    cout << "\n-----------------------------------\n";
    // -----------------------------------

    // lower_bound()
    auto lb = mp.lower_bound(101);

    if (lb != mp.end())
    {
        cout << "lower_bound(101): "
             << lb->first << " "
             << lb->second << endl;
        // Output:
        // lower_bound(101): 101 Nayem
    }

    // upper_bound()
    auto ub = mp.upper_bound(101);

    if (ub != mp.end())
    {
        cout << "upper_bound(101): "
             << ub->first << " "
             << ub->second << endl;
        // Output:
        // upper_bound(101): 102 Michel
    }

    cout << "\n-----------------------------------\n";
    // -----------------------------------

    // equal_range()
    auto range = mp.equal_range(101);

    cout << "All values of key 101\n";
    // Output:
    // All values of key 101

    for (auto itr = range.first;
         itr != range.second;
         ++itr)
    {
        cout << itr->first
             << " "
             << itr->second
             << endl;
        // 101 Nayem
        // 101 Alan
        // 101 Alex
    }

    cout << "\n-----------------------------------\n";
    // -----------------------------------

    // erase by iterator
    auto itr = mp.find(104);

    if (itr != mp.end())
        mp.erase(itr);

    // erase all entries with key
    mp.erase(101);

    cout << "After erase()\n";
    // Output:
    // After erase()

    for (auto val : mp)
    {
        cout << val.first
             << " "
             << val.second
             << endl;
        // 102 Michel
        // 102 Robin
        // 103 John
        // 105 Kibria
        // 106 David
        // 108 Abro
    }

    cout << "\n-----------------------------------\n";
    // -----------------------------------

    // erase range
    mp.erase(mp.begin(), mp.lower_bound(105));

    cout << "After range erase\n";
    // Output:
    // After range erase

    for (auto val : mp)
    {
        cout << val.first
             << " "
             << val.second
             << endl;
        // 105 Kibria
        // 106 David
        // 108 Abro
    }

    cout << "\n-----------------------------------\n";
    // -----------------------------------

    // clear()
    mp.clear();

    cout << "Size after clear = "
         << mp.size() << endl;
    // Output:
    // Size after clear = 0

    cout << "Empty = "
         << mp.empty() << endl;
    // Output:
    // Empty = 1

    return 0;
}