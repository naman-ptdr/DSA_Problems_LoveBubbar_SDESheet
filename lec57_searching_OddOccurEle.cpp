#include<iostream>
using namespace std;
#include<vector>
int solve(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(s==e){
            return s;
        }
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                s = mid + 2;
            }else{
                e = mid;
            }
        }else{
            if(arr[mid]==arr[mid-1]){
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}
int main(){
    vector<int> arr{1,1,2,2,3,3,4,4,3,6,6,4,4};
    int ans = solve(arr);
    cout<<"Index is : "<<ans<<endl;
    cout<<"Value is : "<<arr[ans]<<endl;
return 0;
}