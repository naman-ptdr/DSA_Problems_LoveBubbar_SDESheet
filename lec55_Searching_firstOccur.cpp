// first Occurance of an element   ans also for last index
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int firstOccurance(vector<int> v, int target){
    int f = -1;
    int s = 0;
    int e = v.size()-1;
    int mid = (s+e)/2;
    while(s<=e){
        if(v[mid]==target){
            f = mid;
            e = mid - 1;
        }else if(v[mid]>target){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
        mid = (s+e)/2;
    }
    return f;
}

int lastOccurence(vector<int> v, int target){
    int l=-1;
    int s = 0;
    int e = v.size()-1;
    int mid = (e+s)/2;
    while(s<=e){
        if(v[mid]==target){
            l = mid;
            s = mid + 1;
        }else if(v[mid]<target){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = (e+s)/2;
    }
    return l;
}
int main(){
    vector<int> v{1, 3, 4, 4, 4, 4, 6, 7};
    int target = 4;
    int first = firstOccurance(v, target);
    cout<<"first index will be : "<<first<<endl;
    int last = lastOccurence(v, target);
    cout<<"last index will be : "<<last<<endl;

    // By function
    auto ans1 = lower_bound(v.begin(), v.end(), target);
    cout<<"first occurance is : "<<ans1-v.begin()<<endl;
    auto ans2 = upper_bound(v.begin(), v.end(), target);
    cout<<"last occurance is : "<<ans2-v.begin()<<endl;
return 0;
}