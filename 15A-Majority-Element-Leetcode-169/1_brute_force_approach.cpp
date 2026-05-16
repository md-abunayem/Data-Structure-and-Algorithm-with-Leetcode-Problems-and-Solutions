#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> vec){
    for(int i = 0; i < vec.size(); i++){
        int freq = 1;
        for(int j = i+1; j < vec.size(); j++){
            if(vec[i] == vec[j]){
                freq++;
            }
        }  
        
        if(freq > (vec.size() / 2)){
            return vec[i];
        }

        freq = 1;
    }

    return -1;
}

int main(){
    vector<int> vec = {2,2,1,1,1,2,2,3,2};

    cout << "Majority Element: " << majorityElement(vec);
    return 0;
}