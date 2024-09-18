#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int> arr){
    int s = 0; 
    int e = arr.size()-1;
    int mid = s + (e-s)/2;
    while(s <= e){
        if(s == e){
            return s;
        }
        if(mid+1 <= e && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid-1 >= s && arr[mid-1]>arr[mid]){
            return mid-1;
        }
        if(arr[s]>arr[mid]){
            e = mid-1;
        }else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
}
int main(){
    vector<int> arr{9, 10, 2, 4, 6, 8};
    int ans = findPivot(arr);
    if(ans == -1){
        cout<<"Kuch Gadabad is their ";
    }else{
        cout<<"At index "<< ans<< endl;
        cout<<"Pivot element "<<arr[ans];
    }
return 0;
}