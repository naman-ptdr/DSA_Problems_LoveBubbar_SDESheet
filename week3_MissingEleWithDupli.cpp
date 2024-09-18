#include<iostream>
#include<vector>
using namespace std;

int findMising(vector<int>arr){
    // Visited method
    for(int i=0; i<arr.size(); i++){
        int index = abs(arr[i]);
        if(arr[index-1]>0){
            arr[index-1] *= -1;
        }
    }
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>0){
            return i+1;
        }
    }
}
int main(){
    vector<int> arr{1, 3, 5, 3, 4};
    int ans = findMising(arr);
    cout<<ans;
return 0;
}