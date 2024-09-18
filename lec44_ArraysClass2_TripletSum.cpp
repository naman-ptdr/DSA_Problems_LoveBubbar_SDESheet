// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> arr{10, 20, 30, 40};
//     int sum = 80;
//     for(int i=0; i<arr.size(); i++){
//         for(int j=i+1; j<arr.size(); j++){
//             for(int k=j+1; k<arr.size(); k++){
//                 int triplet = arr[i]+arr[j]+arr[k];
//                 if(triplet == sum){
//                     cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
//                 }
//             }
//         }
//     }
// return 0;
// }



#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{-1,0,1,2,-1,-4};
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            for(int k=j+1; k<arr.size(); k++){
                int triplet = arr[i]+arr[j]+arr[k];
                if(triplet == 0){
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
                }
            }
        }
    }
return 0;
}