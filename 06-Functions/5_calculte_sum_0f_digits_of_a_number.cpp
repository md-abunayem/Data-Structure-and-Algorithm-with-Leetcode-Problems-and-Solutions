#include <iostream>
using namespace std;

// calculate sum
double calculateSum(int num)
{
    int sum = 0;

    while (num > 0)
    {
        int reminder = num % 10;
        sum += reminder;
        num /=  10;
    }

    return sum;
}

int main()
{
    int x;
    cout << "Enter your number: ";
    cin >> x;

    cout << "Result of all digits of the number:" << calculateSum(x) << endl;
}