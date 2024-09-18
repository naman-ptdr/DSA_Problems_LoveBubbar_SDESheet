#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1, 3, 5, 7, 2, 4, 6};
    int sum = 9;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            int pairSum = arr[i]+arr[j];
            if(pairSum == sum){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
    }
return 0;
}

// leet code problem

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> twoSum(vector<int>& nums, int target){
//     for(int i=0; i<nums.size(); i++){
//         for(int j=i+1; j<nums.size(); j++){
//             int pairSum = nums[i]+nums[j];
//             if(pairSum == target){
//                 return {i, j};
//             }
//         }
//     }
//     return {};
// }
// int main(){
//     vector<int>arr{1, 3, 5, 7, 2, 4, 6};
//     int sum = 9;
//     vector<int> result = twoSum(arr,sum);
//     if(!result.empty()){
//         cout<<"first pair  -->  ";
//         cout<<"("<<result[0]<<","<<result[1]<<")";
//     }
// return 0;
// }