#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// custom comparator
bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    if (p1.second > p2.second)
    {
        return false;
    }

    if (p1.second == p2.second)
    {
        if (p1.first < p1.first)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    vector<int> vec = {1, 3, 4, 5, 622, 3, 4, 533, 5, 6, 7, 77};

    sort(vec.begin(), vec.end()); // by default ASC

    for (int val : vec) // 1 3 3 4 4 5 5 6 7 77 533 622
    {
        cout << val << " ";
    }
    cout << endl;

    // For DESC
    sort(vec.begin(), vec.end(), greater<int>());

    for (int val : vec) // 622 533 77 7 6 5 5 4 4 3 3 1
    {
        cout << val << " ";
    }
    cout << endl;

    // sort vector of pairs
    vector<pair<int, int>> vec1 = {{1, 3}, {1, 2}, {2, 3}, {5, 7}, {6, 7}, {3, 5}, {4, 19}};

    sort(vec1.begin(), vec1.end());

    for (pair<int, int> p : vec1)
    {
        cout << p.first << " " << p.second << endl;
    }

    cout << "--------------------------------------" << endl;

    // custom comarator
    // sort based on second value, if the second value for multiple elements become same then based on first element sort for them

    sort(vec1.begin(), vec1.end(), comparator);

    for (pair<int, int> p : vec1)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << "--------------------------------------" << endl;

    // reverese();

    vector<int> vec2 = {1, 3, 4, 5, 67, 44, 22};

    reverse(vec2.begin(), vec2.end()); // 22 44 67 5 4 3 1
    for (int p : vec2)
    {
        cout << p << " ";
    }
    cout << endl;
    cout << "--------------------------------------" << endl;

    // reverese based on range
    // we can also sort based on range
    vector<int> vec3 = {1, 3, 4, 5, 67, 44, 22};
    reverse(vec3.begin(), vec3.begin() + 3); // 4 3 1 5 67 44 22

    for (int p : vec3)
    {
        cout << p << " ";
    }

    cout << endl;
    cout << "--------------------------------------" << endl;

    // min(); max(), swap()
    cout << min(1, 2) << endl; // 1
    cout << max(1, 2) << endl; // 2

    int a = 20;
    int b = 40;
    swap(a, b);

    cout << "a: " << a << "   b: " << b;

    return 0;
}