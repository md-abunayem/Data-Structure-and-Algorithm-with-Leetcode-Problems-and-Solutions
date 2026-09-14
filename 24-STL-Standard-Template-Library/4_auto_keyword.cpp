#include <iostream>
using namespace std;

int main()
{
    // without auto keyword
    int x = 10;
    double y = 13.44;
    string str = "Nayekm";
    bool isTrue = true;

    // with auto keyword
    auto x1 = 3334;
    auto y1 = 33.44;
    auto str1 = "Nayem";
    auto isFalse = false;

    auto vec = {12, 3, 4, 5, 6};

    for (int val : vec)
    {
        cout << val << " ";
    }

    cout << endl;

    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}