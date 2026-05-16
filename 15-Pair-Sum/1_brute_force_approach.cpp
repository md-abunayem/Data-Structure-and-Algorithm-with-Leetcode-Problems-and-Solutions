#include<iostream>
#include<vector>
using namespace std;

//Question: Return pair in a sorted array with target sum
int main(){
    int target = 9;
    vector<int> vec = {2,4,5,6};

    vector<int> ans;

    for(int i = 0; i < vec.size()-1; i++){
        for(int j = i+1; j < vec.size(); j++){
            if(vec[i] + vec[j] == target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }

    //answer array elements
    cout << "First element index: " << ans[0] <<endl;
    cout << "Second element index: " << ans[1] <<endl;


    return 0;
}