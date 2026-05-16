#include<iostream>
#include<vector>
using namespace std;

//Question: Return pair in a sorted array with target sum

int main(){
    int target = 9;
    vector<int> vec = {2,4,5,6};
    vector<int> ans;

    //pointers
    int st = 0;                     
    int end = vec.size() - 1;

    for(int i =0; i<vec.size(); i++){
        int sum = vec[st] + vec[end];
        if(sum == target){
            ans.push_back(st);
            ans.push_back(end);
        }else if( sum > target){    //take the pointer end to the smaller value then current one
            end--; 
        }else if(sum < target){ 
            st++;                   //take the st pinter to the begger value then current one
        }
    }

    //answer array elements
    cout << "First element index: " << ans[0] <<endl;
    cout << "Second element index: " << ans[1] <<endl;

    return 0;
}