#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    // push()
    // emplace()
    // front()
    // back()
    // size()
    // pop()
    // empty()
    // swap()

    // Like stack, std::queue does not provide iterators (begin()/end()), so you cannot do:

    q.push(10);
    q.push(20);
    q.push(30);

    q.emplace(40);

    cout << q.size() << endl;

    cout << q.front() << endl;
    cout << q.back() << endl;

    // travarsal
    queue<int> q1 = q;
    while (!q1.empty())
    {
        cout << q1.front() << " ";
        q.pop();
    }
    cout << endl;

    queue<int> q2;

    // swap()
    q2.swap(q);
    cout << q2.front() << endl;
    return 0;
}
