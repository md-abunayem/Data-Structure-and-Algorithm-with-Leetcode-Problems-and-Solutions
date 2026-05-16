#include <iostream>
using namespace std;

void showNumber() {
    int x = 10;   // local variable
    cout << "Inside function, x = " << x << endl;
}

int main() {
    showNumber();

    // cout << x;  // ERROR: x is not accessible here
    return 0;
}
