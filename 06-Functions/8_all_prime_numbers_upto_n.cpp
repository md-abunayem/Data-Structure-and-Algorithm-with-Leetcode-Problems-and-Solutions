#include <iostream>
using namespace std;

// calculate sum
void primeNumbers(int n)
{
    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers are: ";
    primeNumbers(n);
}