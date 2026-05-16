#include <iostream>
using namespace std;

/*
Loop method:
bool isPowerOfTwo(int n) {
    if (n <= 0) return false;

    while (n % 2 == 0) {
        n = n / 2;
    }

    return n == 1;
}
*/

bool isPowerOfTwo(int n){
    return n > 0 && (n & (n-1)) == 0;
}
int main() {
   int x;
   cout << "Enter a number:" <<endl;
   cin >> x;

   if(isPowerOfTwo(x)){
    cout << "Power of 2";
   }else{
     cout << "Not power of 2";
   }
    
    return 0;
}
