#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> mp;

    // ----------------------------
    // Insert Elements
    // ----------------------------

    mp[101] = "Nayem";       // Insert
    mp[103] = "John";
    mp[102] = "Michel";
    mp[105] = "Kibria";
    mp[104] = "Ahon";

    // emplace(key, value)
    mp.emplace(106, "Alan");

    // insert({key, value})
    mp.insert({108, "Abro"});

    // Duplicate key
    mp.insert({101, "Alex"});   // Ignored because key already exists

    cout << "Traversal\n";
    // Output (Order is NOT guaranteed)
    // Example:
    // 108 Abro
    // 106 Alan
    // 104 Ahon
    // 105 Kibria
    // 102 Michel
    // 103 John
    // 101 Nayem

    for(auto val : mp)
    {
        cout << val.first << " " << val.second << endl;
    }

    cout << "\n-----------------------------\n";

    // Iterator Traversal
    for(unordered_map<int,string>::iterator it = mp.begin();
        it != mp.end();
        ++it)
    {
        cout << it->first << " " << it->second << endl;
        // Output:
        // Same elements as above
        // Order may differ
    }

    cout << "\n-----------------------------\n";

    // size()

    cout << "Size = " << mp.size() << endl;
    // Output:
    // Size = 7

    // empty()

    cout << "Empty = " << mp.empty() << endl;
    // Output:
    // Empty = 0

    cout << "\n-----------------------------\n";

    // count()

    cout << "Count of 101 = "
         << mp.count(101)
         << endl;

    // Output:
    // Count of 101 = 1

    cout << "\n-----------------------------\n";

    // find()

    auto it = mp.find(106);

    if(it != mp.end())
    {
        cout << "Found\n";
        // Output:
        // Found

        cout << it->first
             << " "
             << it->second
             << endl;

        // Output:
        // 106 Alan
    }

    cout << "\n-----------------------------\n";

    // erase(key)

    mp.erase(103);

    cout << "After erase(103)\n";
    // Output:
    // After erase(103)

    for(auto val : mp)
    {
        cout << val.first << " "
             << val.second
             << endl;
    }

    cout << "\n-----------------------------\n";

    // erase(iterator)

    auto itr = mp.find(104);

    if(itr != mp.end())
    {
        mp.erase(itr);
    }

    cout << "After erase(iterator)\n";
    // Output:
    // After erase(iterator)

    for(auto val : mp)
    {
        cout << val.first << " "
             << val.second
             << endl;
    }

    cout << "\n-----------------------------\n";

    // at()

    cout << "Value of key 101 = "
         << mp.at(101)
         << endl;

    // Output:
    // Value of key 101 = Nayem

    cout << "\n-----------------------------\n";

    // bucket_count()

    cout << "Bucket Count = "
         << mp.bucket_count()
         << endl;

    // Output:
    // Depends on implementation
    // Example:
    // Bucket Count = 13

    // bucket(key)

    cout << "Bucket of key 101 = "
         << mp.bucket(101)
         << endl;

    // Output:
    // Implementation dependent

    // load_factor()

    cout << "Load Factor = "
         << mp.load_factor()
         << endl;

    // Output:
    // Example:
    // 0.53

    // max_load_factor()

    cout << "Max Load Factor = "
         << mp.max_load_factor()
         << endl;

    // Output:
    // 1

    cout << "\n-----------------------------\n";

    // clear()

    mp.clear();

    cout << "Size = "
         << mp.size()
         << endl;

    // Output:
    // Size = 0

    cout << "Empty = "
         << mp.empty()
         << endl;

    // Output:
    // Empty = 1

    return 0;
}