#include <iostream>
using namespace std;

// calculate sum
void primeNumber(int number)
{
    int flag = 0;

    if (number < 0)
    {
        cout << "Invalid number......." << endl;
        cout << "Enter the number again......";
        return;
    }

    if (number == 2)
    {
        cout << number << " is a prime number";
        return;
    }

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            flag++;
            break;
        }
    }

    if (flag > 0)
    {
        cout << number << " is a non prime number";
    }
    else
    {
        cout << number << " is a prime number";
    }
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    primeNumber(x);
}