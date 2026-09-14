#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq; // higher value => higher priority (default) => Max Heap

    // push()
    // emplace()
    // size()
    // top()
    // pop()
    // empty()
    // swap()

    pq.push(10);
    pq.push(30);
    pq.push(20);

    pq.emplace(15);

    cout << pq.top() << endl;

    cout << pq.size() << endl;

    while (!pq.empty())
    {
        cout << pq.top() << " "; // 30 20 15 10
        pq.pop();
    }
    cout << endl;

    cout << pq.empty() << endl; // 1=> true

    // Min Heap priority code
    priority_queue<int, vector<int>, greater<int>> q;

    q.push(10);
    q.push(5);
    q.push(20);
    q.push(25);

    while (!q.empty())
    {
        cout << q.top() << " "; // 5 10 20 25
        q.pop();
    }
    cout << endl;

    return 0;
}