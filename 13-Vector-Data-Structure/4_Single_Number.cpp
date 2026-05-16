#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec= {1,2,3,4,3,2,4};

    int ans = 0;
    for(int i=0; i<vec.size(); i++){
        ans ^= vec[i];
    }

    cout << "Single value which is unique is: " <<ans ;

}