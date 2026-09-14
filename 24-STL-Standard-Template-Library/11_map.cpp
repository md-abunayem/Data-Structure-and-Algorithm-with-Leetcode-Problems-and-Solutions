#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<int, string> mp;

    mp[101] = "Nayem";
    mp[103] = "Jhon";
    mp[102] = "Michel";
    mp[105] = "Kibria";
    mp[104] = "Ahon";

    // emplace(val)
    // insert({key, val})
    // count(key)
    // size()
    // erase()
    // empty()
    // find(key)
    //
    mp.emplace(106, "Alan");
    mp.insert({108, "Abro"});

    for (auto val : mp)
    {
        cout << val.first << " " << val.second << endl;
    }
    cout << endl;

    cout << "-----------------------------------" << endl;

    // with iterator (begin(), and end())
    for (map<int, string>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    cout << "-----------------------------------" << endl;

    for (auto it = mp.rbegin(); it != mp.rend(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    cout << "-----------------------------------" << endl;

    // count(key) => no. of times a key present into map
    cout << mp.count(101) << endl; // 1 => keys are unique for map

    // erase(key)
    mp.erase(101);
    for (auto val : mp)
    {
        cout << val.first << " " << val.second << endl;
    }
    cout << endl;

    // size()
    cout << mp.size() << endl;

    // empty()
    cout << mp.empty() << endl; // 0 => false

    // find()
    auto it = mp.find(106);
    if (it != mp.end())
    {
        cout << "Key found" << endl;
        cout << it->first << ": " << it->second << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    // erase()
    // by key
    mp.erase(105);

    // erase a range
    mp.erase(mp.begin(), mp.find(104));

    cout << "-------------------------------------" << endl;

    for (auto val : mp)
    {
        cout << val.first << " " << val.second << endl;
    }
    cout << endl;

    return 0;
}