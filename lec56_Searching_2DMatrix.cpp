#include<iostream>
using namespace std;
bool binarySeaarch(int arr[][4], int r, int c, int target){
    int s = 0;
    int total = r*c;
    int e = total-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        int rowIndex = mid/c;
        int colIndex = mid%c;
        int element = arr[rowIndex][colIndex];
        if(element==target){
            cout<<rowIndex<<" "<<colIndex<<endl;
            return true;
        }else if(element<target){
            s = mid+1;
        }else{
            e = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return false;
}
int main(){
    int arr[5][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}, {17,18,19,20}};
    int r = 5;
    int c = 4;
    int target = 19;

    bool ans = binarySeaarch(arr, r, c, target);
    if(ans){
        cout<<"Found "<<endl;
    }else{
        cout<<"Not Found "<<endl;
    }
return 0;
}