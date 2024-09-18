#include<iostream>
#include<vector>
using namespace std;

void moveNeg( vector<int> &nums){
    int l=0, h=nums.size()-1;
    while(l<h){
        if(nums[l]<0){
        l++;
    }else{
        swap(nums[l], nums[h]);
        h--;
    }
    }
}
int main(){
    vector<int> nums{1,2,-3,4,-5,6};

    moveNeg(nums);

    for(auto value : nums){
        cout<<value<<" ";
    }
return 0;
}