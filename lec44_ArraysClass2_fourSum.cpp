#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> arr{10, 20, 30, 40, 50};
    int sum = 120;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            for(int k=j+1; k<arr.size(); k++){
                for(int n=k+1; n<arr.size(); n++){
                    int four = arr[i] + arr[j] + arr[k] + arr[n];
                    if(four == sum){
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<","<<arr[n]<<")";
                    }
                }
            }
        }
    }
return 0;
}