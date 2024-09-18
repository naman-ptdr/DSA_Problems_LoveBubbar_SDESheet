#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr{2, 0, 2, 1, 1, 0};

    // Implement Sorting Function

    // sort(arr.begin(),arr.end());
    
    // Implement Count Method  -- it is not in place solution


    // int zero = 0, one = 0, two = 0;
    // for(int i=0; i<arr.size(); i++){
    //     if(arr[i]==0){
    //         zero++;
    //     }else if(arr[i]==1){
    //         one++;
    //     }else{
    //         two++;
    //     }
    // }
    // int i=0; 
    // while(zero--){
    //     arr[i]=0;
    //     i++;
    // }
    // while(one--){
    //     arr[i]=1;
    //     i++;
    // }
    // while(two--){
    //     arr[i]=2;
    //     i++;
    // }

    //----------  Three pointer Approach-------------------
    // it is in place solution

    int l=0, m=0, h=arr.size()-1;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[m], arr[l]);
            l++, m++;
        }else if(arr[m]==1){
            m++;
        }else{
            swap(arr[m], arr[h]);
            h--;
        }
    }



    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    for(auto value : arr){
        cout<<value<<" ";
    }
return 0;
}