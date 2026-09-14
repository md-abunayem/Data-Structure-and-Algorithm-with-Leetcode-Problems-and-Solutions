// deque=> double ended queue (can insert and delete elements from front and backs)

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

// it supports index also
int main()
{
    deque<int> dq = {10, 20, 30, 40};
    deque<int> dq1;
    deque<int> dq2(5, 10);

    for (int val : dq2)
    {
        cout << val << " ";
    }

    cout << endl;

    // push_back(), push_front(), pop_back(), pop_front()
    dq.push_back(1); // 10, 20, 30, 40, 1
    dq.push_back(2); // 10, 20, 30, 40, 1, 2

    dq.push_front(3); // 3, 10, 20, 30, 40, 1, 2
    dq.push_front(4); // 4, 3, 10, 20, 30, 40, 1, 2

    dq.pop_back(); // 4, 3, 10, 20, 30, 40, 1

    dq.pop_front(); // 3, 10, 20, 30, 40, 1

    // access using index
    cout << dq[5] << endl; // 1

    // insert(iteration, val)
    dq.insert(dq.begin() + 2, 25);

    for (int val : dq)
    {
        cout << val << " "; // 3, 10, 25, 20, 30, 40, 1
    }
    cout << endl;

    // dq.size()
    cout << dq.size() << endl;

    // erase(first iteration, last iterator)
    // delete a range
    dq.erase(dq.begin() + 2, dq.begin() + 5); // 3, 10, 40, 1

    for (int val : dq)
    {
        cout << val << " ";
    }
    cout << endl; // 3, 10, 40, 1

    // find(val)
    auto it = find(dq.begin(), dq.end(), 40); // use algorithm(import)

    if (it != dq.end())
    {
        cout << 40 << " found at index " << distance(dq.begin(), it);
    }
    else
    {
        cout << "Not found";
    }

    // empty()
    cout << dq.empty() << endl; // 0=> false

    // emplace_back();
    dq.emplace_back(19);

    // emplace_front();
    dq.emplace_front(9);

    // front(), back()
    cout << dq.front() << endl;
    cout << dq.back() << endl;

    for (int val : dq)
    {
        cout << val << " ";
    }
    cout << endl; // 9, 3, 10, 40, 1, 19

    // clear()
    dq.clear();

    cout << dq.size(); // 0

    return 0;
}