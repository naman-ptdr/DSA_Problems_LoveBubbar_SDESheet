#include<iostream>
#include<vector>
using namespace std;

int main(){ 
    //Create vector
    vector<int> arr;
    int ans = (sizeof(arr)/sizeof(int));
    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;
    // cout<<arr.max_size()<<endl;
    // cout<<ans<<endl;


    arr.push_back(4);
    arr.push_back(8);
    arr.push_back(2);

    arr.pop_back();

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> brr(10);
    cout<<"Size of brr "<<brr.size()<<endl;
    cout<<"Size of brr "<<brr.capacity()<<endl;

    for(int i=0; i<brr.size(); i++){
        cout<<brr[i]<<" ";
    }
cout<<endl;
    vector<int> crr(10,-1);
    for(int i=0; i<crr.size(); i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    vector<int> drr{10,20,30};
    for(int i=0; i<drr.size(); i++){
        cout<<drr[i]<<" ";
    }

return 0;
}