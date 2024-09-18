#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 5, 7, 9};
    int brr[] = {2, 4, 7, 6, 8};
    int sizea = 6;
    int sizeb = 5;
    vector<int> ans;
    for(int i=0; i<sizea; i++){
        ans.push_back(arr[i]);
    }
    for(int i=0; i<sizeb; i++){
        for(int j=0; j<sizea; j++){
            if(brr[i] == arr[j]){
                brr[i] = INT_MIN;
            }
        }
    }
    for(int i=0; i<sizeb; i++){
        if(brr[i] != INT_MIN){
            ans.push_back(brr[i]);
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

return 0;
}