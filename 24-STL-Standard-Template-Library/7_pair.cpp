#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    pair<int, string> p;
    pair<int, int> p1 = {1, 100};

    p.first = 101;
    p.second = "Nayem";

    cout << "Id: " << p.first << endl;
    cout << "Name: " << p.second << endl;

    // update value
    p.first = 1001;
    cout << "Updated: " << endl;
    cout << "Id: " << p.first << endl;
    cout << "Name: " << p.second << endl;

    // Nested Pair (Pair of pair)
    pair<int, pair<int, string>> p2;
    p2.first = 10001;
    p2.second.first = 88;
    p2.second.second = "Jhon";

    cout << "Id: " << p2.first << endl;
    cout << "Mark: " << p2.second.first << endl;
    cout << "Name: " << p2.second.second << endl;

    // vector of pairs
    vector<pair<int, string>> vec;

    vec.push_back({1002, "Jhon"});
    vec.push_back({1003, "Michel"});
    vec.push_back({1004, "Imbajf"});

    vec.emplace_back(1005, "Imbajf");

    for (auto val : vec)
    {
        cout << val.first << " " << val.second << endl;
    }

    vec.pop_back();

    return 0;
}