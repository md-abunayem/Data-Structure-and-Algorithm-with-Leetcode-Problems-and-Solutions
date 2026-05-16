#include <iostream>
using namespace std;

string converDecimalToHexa(int num)
{
    if (num == 0)
        return "0";

    string hex = "";
    char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    while (num > 0)
    {
        int rem = num % 16;
        hex = hexDigits[rem] + hex;
        num /= 16;
    }

    return hex;
}
int main()
{
    int decimalNum;
    cout << "Enter decimal number: ";
    cin >> decimalNum;

    cout << "Converted Hexadecimal Number is : " << converDecimalToHexa(decimalNum);
}