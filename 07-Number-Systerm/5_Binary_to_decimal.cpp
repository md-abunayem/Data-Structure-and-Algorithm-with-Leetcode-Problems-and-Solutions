#include <iostream>
using namespace std;

int converDecimalToHexa(int num)
{
    int ans = 0;
    int pow = 1;
    while (num > 0)
    {
        int rem = num % 10;
        ans += rem * pow;
        num /= 10;
        pow *=2; 
    }

    return ans;
}
int main()
{
    int binaryNum;
    cout << "Enter binary number: ";
    cin >> binaryNum;

    cout << "Converted decimal Number is : " << converDecimalToHexa(binaryNum);
}