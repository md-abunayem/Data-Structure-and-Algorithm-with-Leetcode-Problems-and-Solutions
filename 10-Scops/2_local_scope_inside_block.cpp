#include <iostream>
using namespace std;

int main() {
    if (true) {
        int y = 20;  // local to this block
        cout << "Inside if block, y = " << y << endl;
    }

    // cout << y;  // ERROR: y not accessible here
    return 0;
}
