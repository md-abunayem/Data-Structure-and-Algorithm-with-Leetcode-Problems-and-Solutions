#include <iostream>
using namespace std;

int main()
{
    int num = 4;
    int shift = 2;

    cout << "Bitwise left shift:" << (num << shift);
}

/*
1.first - convert numbers to binary
2. apply left shift operation based on provided shift number or steps
*/

/*.................................................................
Left shift done an operation on the memory-
a << b
result =  a * 2 ^ b

let consider,
a = 8 then,
binary = 1000
after performing left shift operation by 1 (8 << 1)
ans = 10000
deximal of 10000 = 16

16 is equivalent to (8*2^1)
so, a * 2 ^ b (proved)
..................................................................
*/