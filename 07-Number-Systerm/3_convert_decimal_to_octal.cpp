#include <iostream>
using namespace std;

int converDecimalToOctal(int num)
{
    int pow = 1;
    int ans = 0;

    while (num > 0)
    {
        int rem = num % 8;
        ans += rem * pow;
        pow *= 10;
        num = num / 8;
    }

    return ans;
}
int main()
{
    int decimalNum;
    cout << "Enter decimal number: ";
    cin >> decimalNum;

    cout << "Converted Octal Number is : " << converDecimalToOctal(decimalNum);
}