#include <iostream>
#include <stack>
using namespace std;

/*
 *push()
 *pop()
 *emplace()
 *top()
 *swap()
 *empty()
 */

int main()
{
    stack<int> s; // LIFO

    s.push(10);
    s.push(200);
    s.push(30);

    s.emplace(310);

    // for(int val : s){            //stack is not iterable
    //     cout << val << " ";
    // }

    cout << endl;

    // s.top()
    cout << s.top() << endl;

    // s.size()
    cout << s.size();
    cout << endl;

    stack<int> temp = s;
    while (!temp.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    // swap()
    stack<int> s1;

    s1.swap(s);

    cout << s1.size() << endl;

    cout << s.empty() << endl;
    return 0;
}