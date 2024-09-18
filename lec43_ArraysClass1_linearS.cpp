#include<iostream>
using namespace std;
bool find(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){


    int arr[5]={5,2,9,4,7};
    int size = 5;
    int key;
    cout<<"Enter the key to find ";
    cin>>key;
    if(find(arr, size,key)){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }


    // int arr[8]={1, 2 ,3, 4, 5, 6, 7,8 };
    // int size = 8;
    // int key;
    // cout<<"Enter the key value";
    // cin>>key;
    // bool flag = 0;
    // for(int i=0; i<size; i++){
    //     if(arr[i]==key){
    //         flag = 1;
    //         break;
    //     }
    // }
    // if(flag){
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"Not Found";
    // }


return 0;
}