#include <iostream>
using namespace std;

int x = 100;   // global variable

void display() {
    cout << "Inside display(): x = " << x << endl;
}

int main() {
    cout << "Inside main(): x = " << x << endl;
    display();
    return 0;
}
