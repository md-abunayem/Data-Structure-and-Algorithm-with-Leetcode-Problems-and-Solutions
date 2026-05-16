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
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Converted Binary Numbers are : " <<endl;
    for (int i = 0; i <= n; i++)
    {
       cout << converDecimalToBinary(i) <<endl;
    }
}