#include <iostream>
using namespace std;

int converDecimalToBinary(int num)
{
    int pow = 1;
    int ans = 0;

    while (num > 0)
    {
        int rem = num % 2;
        ans += rem * pow;
        pow *= 10;
        num = num / 2;
    }

    return ans;
}
int main()
{
    int decimalNum;
    cout << "Enter decimal number: ";
    cin >> decimalNum;

    cout << "Converted Binary Number is : " << converDecimalToBinary(decimalNum);
}