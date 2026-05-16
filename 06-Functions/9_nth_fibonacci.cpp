#include <iostream>
using namespace std;

long long nthFibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    long long first = 0, second = 1, next;
    for (int i = 2; i <= n; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }

    return next;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << nthFibonacci(n) << endl;
}